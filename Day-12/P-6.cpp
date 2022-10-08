//Minimum depth of a binary tree

//Solution-1
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
       if(root==NULL) return 0;
      if(root->left==NULL and root->right==NULL) return 1;
      int l=minDepth(root->left);
      int r=minDepth(root->right); 
      if(l==0||r==0) return 1+max(l,r);
      else return 1+min(l,r);
    }
};

//Solution-2
class Solution {
public:
    int minDepth(TreeNode* root) {
        int l=10000,r=10000;
       if(root==NULL) return 0;
      if(root->left==NULL and root->right==NULL) return 1;
      else{
          if(root->left!=NULL) l=minDepth(root->left);
          if(root->right!=NULL) r=minDepth(root->right); 
      }
      if(l<r) return l+1;
      else return r+1;
    }
};

