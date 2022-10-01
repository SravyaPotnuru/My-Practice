//Decode Ways
//Basic 3 base cases
 //1)if i=2 for'12' the it is accessing null but we have decoded the number so return 1
 //2)if the first digit is 0 then we can't decode that number in any way so return 0
 //3)if we reached the last position then also we ahve decoded the number so return 1
//Now check for the digits if s[i] is '1' then the second number can be anything between '0' and '9'
//But for '2' we should check the second digit should be in the range of '0'(ASCII value 48) to '6'(ASCII value 54)
//if this condition satisfied then we can go for recursion like for 2134 we can take 2 and as well as 21.(this condition is for b/w 10-26)
//for single digits we can decode them in only one way so i+1 only.


//Solution 1 using only recursion but will get TIME LIMIT EXCEEDED
class Solution {
public:
    int solve(int i,string&s){
        if(i>=s.size()) return 1;
        else if(s[i]=='0') return 0;
        else if(i==s.size()-1) return 1;
        else if(s[i]=='1'||s[i]=='2'&&(s[i+1]>=48&&s[i+1]<=54))
        return solve(i+1,s)+solve(i+2,s);
        else return solve(i+1,s);
    }
    int numDecodings(string s) {
        return solve(0,s);
    }
};

//For optimization we are using dynamic programming
class Solution {
public:
    vector<int>dp;
    int solve(int i,string&s){
        if(i>=s.size()) return 1;
        else if(s[i]=='0') return 0;
        else if(i==s.size()-1) return 1;
        else if(dp[i]!=-1) return dp[i];
        else if(s[i]=='1'||s[i]=='2'&&(s[i+1]>=48&&s[i+1]<=54))
        return dp[i]=solve(i+1,s)+solve(i+2,s);
        else return dp[i]=solve(i+1,s);
    }
    int numDecodings(string s) {
        dp.resize(s.size());
        dp.assign(s.size(),-1);
        return solve(0,s);
    }
};

