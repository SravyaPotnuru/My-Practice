//Sum root to leaf Numbers

class Solution {
public:
    int sum=0;
    void solve(TreeNode* root,int digit){
        if(root==nullptr) return;
        if(root->left==0&&root->right==0) {
           digit = digit*10 + root->val;
            sum += digit;
            digit = 0;
        }
        else{
        digit=digit*10+root->val;
        solve(root->left,digit);
        solve(root->right,digit);
        }
            }
    int sumNumbers(TreeNode* root) {
      solve(root,0);
      return sum;
    }
};

