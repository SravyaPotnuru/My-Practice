//Construct Binary Tree from Inorder and Preorder Traversals

class Solution {
public:
    int preindex=0;
    TreeNode* solve(vector<int>&pre,vector<int>&in,int is,int ie){
        if(is>ie) return NULL;
        TreeNode* root=new TreeNode(pre[preindex++]);
        int inindex;
        for(int i=is;i<=ie;i++){
            if(in[i]==root->val){
                inindex=i;
                break;
            }
        }
        root->left=solve(pre,in,is,inindex-1);
        root->right=solve(pre,in,inindex+1,ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int is=0,ie=inorder.size()-1;
        return solve(preorder,inorder,is,ie);
    }
};

