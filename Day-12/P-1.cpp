//Binary Level Order Traversal 2

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            vector<int>v;
            for(int i=0;i<cnt;i++){
                TreeNode* curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
            }
            ans.push_back(v);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }   
    
};

