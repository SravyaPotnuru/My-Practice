//Minimum time to make the rope colourful

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
      if(colors.length()==0||colors.length()==1) return 0;
      int sum=0;
      for(int i=1;i<colors.length();i++){
          if(colors[i]==colors[i-1]){
              sum+=min(neededTime[i],neededTime[i-1]);
              neededTime[i]=max(neededTime[i],neededTime[i-1]);
          }
      }
      return sum;
    }
};
