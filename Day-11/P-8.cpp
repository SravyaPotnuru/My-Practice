//Symmetric Tree

class Solution {
public:
    bool solve(TreeNode* left,TreeNode* right){
        if(!left && !right) return true;
        if(!left&&right || left&&!right) return false;
        if(left->val!=right->val) return false;
        return (solve(left->left,right->right))&&(solve(left->right,right->left));
    }
    bool isSymmetric(TreeNode* root) {
       if(!root->left && !root->right) return true;
       return solve(root->left,root->right); 
    }
};

