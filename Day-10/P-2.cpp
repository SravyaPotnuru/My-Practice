//Time Based key-value store

class TimeMap {
public:
    unordered_map<string,map<int,string>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        string ans="";
        if((mp.find(key)!=mp.end())&&(!mp[key].empty())&&(mp[key].begin()->first<=timestamp)){
            for(auto it=mp[key].rbegin();it!=mp[key].rend();it++){
                if(it->first<=timestamp){
                    ans=it->second;
                    break;
                }
            }
        }
        return ans;
    }
};
