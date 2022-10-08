//Binary Tree Right View

class Solution {
public:
vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
      if(root==NULL) return ans;
      queue<TreeNode*>q;
      q.push(root);
      while(q.empty()==false){
          int cnt=q.size();
          for(int i=0;i<cnt;i++){
              TreeNode*curr=q.front();
              q.pop();
              if(i==cnt-1) ans.push_back(curr->val);
              if(curr->left!=NULL) q.push(curr->left);
              if(curr->right!=NULL) q.push(curr->right);
          }
      }
      return ans;  
    }
};

