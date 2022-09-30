//Number of Recent Calls

class RecentCounter {
public:
    deque<int>d;
    RecentCounter() {
        
    }
    
    int ping(int t) {
    
       d.push_front(t);
        while(d.back()<t-3000){
            d.pop_back();
        }
        return d.size();
    }
};
