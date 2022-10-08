//3Sum Closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int j,k;
        for(int i=0;i<nums.size()-2;i++){
          j=i+1,k=nums.size()-1;
          int sum;
          while(j<k){
              sum=nums[i]+nums[j]+nums[k];
              if(sum==target) return sum;
              if(abs(target-closest)>abs(target-sum)) closest=sum;
              if(sum>target) k--;
              else j++;
          }
        }
        return closest;
    }
};

