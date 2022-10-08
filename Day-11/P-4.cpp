//Balanced  Binary Tree

class Solution {
public:
   int balanced(TreeNode*&root){
       if(root==NULL) return 0;
       int lh=balanced(root->left);
       if(lh==-1) return -1;
       int rh=balanced(root->right);
       if(rh==-1) return -1;
       if(abs(rh-lh)>1) return -1;
       else return max(rh,lh)+1;
   }
    bool isBalanced(TreeNode* root) {
      int ans=balanced(root);
      if(ans>=0) return true;
      else return false;
    }
};
