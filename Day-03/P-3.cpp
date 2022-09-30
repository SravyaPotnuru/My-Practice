//Number of Students Unable to eat lunch

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    int n = sandwiches.size();
    reverse(sandwiches.begin() , sandwiches.end());
    queue<int>q;
  
    for(int i = n - 1; i >= 0; i--)
        q.push(students[i]);
    while(q.size()){
        int qSize = q.size() , size = q.size();
        while(size--){
            if(sandwiches.back() == q.front())
                sandwiches.pop_back();
            else
                q.push(q.front());
            q.pop();
        }
        if(q.size() == qSize)
            return q.size();
    }
    return 0;
        } 
    };

