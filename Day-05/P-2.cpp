//Longest Substring Without Reapeting Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      map<char,int>m;
        deque<int>d;
        int maxi=0;
        
        for(int i=0;i<s.length();i++){
            d.push_back(s[i]);
            m[s[i]]++;
            while(m[s[i]]>1){
                m[d.front()]--;
                d.pop_front();
            }
            int x=d.size();
            maxi=max(maxi,x);
        }
        return maxi;
    }
};

