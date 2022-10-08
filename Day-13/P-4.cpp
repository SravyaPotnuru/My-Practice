//Paths sum-2

class Solution {
public:
    vector<vector<int>>ans;
    vector<int>v;
    void solve(TreeNode* root,int sum,int targetSum){
        if(root==nullptr) return;
        sum+=root->val;
        v.push_back(root->val);
        if(root->left==0&&root->right==0){
            if(sum==targetSum){
                ans.push_back(v);
            }
        }
            solve(root->left,sum,targetSum);
            solve(root->right,sum,targetSum);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     solve(root,0,targetSum);
       return ans;
    }
};

