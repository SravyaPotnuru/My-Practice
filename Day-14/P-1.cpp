//Construct Binary tree from Inorder and Postorder traversal

class Solution {
public:
TreeNode* solve(vector<int>&in,vector<int>&post,int start,int end,TreeNode*res,int &postIdx,unordered_map<int,int>&m){
        if(start>end || postIdx<0 )return NULL;
        
        int idx=m[post[postIdx]];
        res=new TreeNode(in[idx]);
        postIdx--;
        
        res->right=solve(in,post,idx+1,end,res->right,postIdx,m); 
        res->left=solve(in,post,start,idx-1,res->left,postIdx,m); 
        
        return res;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int postIdx=n-1;
        TreeNode*res=NULL;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[inorder[i]]=i;
        }
        res=solve(inorder,postorder,0,n-1,res,postIdx,m);
        return res;
    }
};
