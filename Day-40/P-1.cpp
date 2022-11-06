//Orderly Queue

class Solution {
public:
    string orderlyQueue(string s, int k) {
       if(k==0) return s;
       else if(k>1){
           sort(s.begin(),s.end());
           return s;
       } 
       else if(k==1){
           string ans=s;
           for(int i=0;i<s.length();i++){
               string reorder=s.substr(i)+s.substr(0,i);
               if(ans.compare(reorder)>0)
               ans=reorder;
           }
           return ans;
       }
       return s;
    }
};
