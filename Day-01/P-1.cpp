//Majority element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int k=0;
        int ele=0;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>k){
                ele=i->first;
                k=i->second;
            }
        }
        return ele; 
    }
};

