//3Sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       if(nums.size()<0) return {};
       if(nums[0]>0) return {};

       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++){
           m[nums[i]]=i;
       } 
       vector<vector<int>>ans;
       for(int i=0;i<nums.size()-2;i++){
           if(nums[i]>0) break;
           for(int j=i+1;j<nums.size()-1;j++){
           int req=-1*(nums[i]+nums[j]);
            if(m.count(req)&&m.find(req)->second>j)
            ans.push_back({nums[i],nums[j],req});
            j=m.find(nums[j])->second;
           }
           i=m.find(nums[i])->second;
       }
       return ans;
    }
};
