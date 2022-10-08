//Binary Tree zigzag Level Order Travesral

class Solution {
public:
vector<vector<int>>ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return ans;
       queue<TreeNode*>q;
       stack<int>s;
       bool reverse=false;
       q.push(root);
       while(q.empty()==false){
           int cnt=q.size();
           vector<int>v;
           for(int i=0;i<cnt;i++){
               TreeNode*curr=q.front();
               q.pop();
               if(reverse) s.push(curr->val);
               else v.push_back(curr->val);
               if(curr->left!=NULL) q.push(curr->left);
               if(curr->right!=NULL) q.push(curr->right);
           }
           if(reverse){
                   while(s.empty()==false){
                       v.push_back(s.top());
                       s.pop();
                   }
               }
          reverse=!reverse;
          ans.push_back(v);
       }
       return ans; 
    }
};
