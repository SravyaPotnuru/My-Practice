//Median of 2 Sorted Arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m=nums1.size(),n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>nums;
        int i=0,j=0;
        while(i<m&&j<n){
            if(nums1[i]<nums2[j])
                nums.push_back(nums1[i++]);
            else
                nums.push_back(nums2[j++]);
        }
        while(i<m)
            nums.push_back(nums1[i++]);
        while(j<n)
            nums.push_back(nums2[j++]);
        
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        double ans;
        if(nums.size()%2==0){
           double b=nums[mid];
           double c=nums[mid+1];
            ans=(b+c)/2;
           }
        else
            ans=nums[mid];
        return ans;
    }
};

