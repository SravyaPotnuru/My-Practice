//Letter Cobinations of a Phone Number
//Given digits in a string so we should convert that into integer by subtracting with 48(ASCII value of 0)

#include<map>
class Solution {
public:
unordered_map<int,string>m={{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
        vector<string> result;
void solve(int pos,string str,string& digits){
    for(int i=0;i<m[digits.at(pos)-48].size();i++){
        str=str+m[digits.at(pos)-48][i];
        if(str.size()==digits.size()){
            result.push_back(str);
            str.erase(str.length()-1);
            continue;
        }
        if(str.size()==pos+1){
            solve(pos+1,str,digits);
            str.erase(str.length()-1);
        }
    }
}
vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        string str="";
        solve(0,str,digits);
        return result;
    }
};

