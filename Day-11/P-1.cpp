//Add One Row to Tree

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth){
        if(root==nullptr) return root;
        if(depth==1){
            TreeNode* newNode = new TreeNode(val);
            newNode -> left = root;
            return newNode; 
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty() and depth-->2){
            int n=q.size();
            while(n--){
                TreeNode* t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            TreeNode* temp=node->left;
            node->left=new TreeNode(val);
            node->left->left=temp;
            temp=node->right;
            node->right=new TreeNode(val);
            node->right->right=temp;
        }
        return root;
        
    }
};
