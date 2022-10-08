//Pth sum in a BINARY TREE

class Solution {
public:
bool solve(TreeNode* root,int sum){
     if(!root) return false;
    if( sum==root->val && !root->left && !root->right) return true;
    return solve(root->left,sum-root->val)||solve(root->right,sum-root->val);
                                        }
    bool hasPathSum(TreeNode* root, int targetSum) {
     return solve(root,targetSum);
        }
    };
