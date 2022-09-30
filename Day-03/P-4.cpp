//time Needed to Buy Tickets
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        queue<int>q;
        for(int i=n-1;i>=0;i--)
            q.push(i);
        int i,cnt=0;
        while(q.size()){
            i=0;
            while(i<n){
                if(tickets[i]>0&&!q.empty()&&tickets[k]!=0){
                    tickets[i]=tickets[i]-1;
                    q.push(q.front());
                    q.pop();
                    cnt++;
                }
                else if(tickets[i]==0&&q.front()!=k){
                    q.pop();
                }
                else if(tickets[k]==0){
                    return cnt;
                }
                i++;
            }
        }
        return 0;
    }
};
