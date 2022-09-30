//Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
        int arr[n+1];
        for(int i=0;i<n+1;i++){
            arr[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int ans=0;
        for(int j=0;j<n+1;j++){
            if(arr[j]==0) ans=j;
        }
        return ans;
    }
};

