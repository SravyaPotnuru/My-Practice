//Find K closest Elements

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       vector<int> ans;
        int s=0,e=arr.size()-k;
        while(s<e){
            int mid=s+(e-s)/2;
            if(x-arr[mid]>arr[mid+k]-x)
                s=mid+1;
            else
                e=mid;
        }
        for(int i=0;i<k;i++){
            ans.push_back(arr[s+i]);
        }
        return ans;
    }
};

