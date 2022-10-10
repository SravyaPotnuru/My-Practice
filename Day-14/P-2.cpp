//search in a Binary Search Tree

class Solution {
public:
     
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode*curr=NULL;
        if(root==NULL) return NULL;
        while(root!=NULL){
            if(root->val==val){
                curr=root;
                return curr;
            }
            else if(root->val>val) root=root->left;
            else root=root->right;
        }
        return NULL;
    }
};
