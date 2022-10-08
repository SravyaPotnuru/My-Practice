//Same Tree

//solution-1
class Solution {
public:
    vector<int> inorder(TreeNode* &root,vector<int>&v){
        if(root==NULL){
            v.push_back(INT_MIN);
            return v;
        }
        v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
        return v;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v1,v2;
        v1=inorder(p,v1);
        v2=inorder(q,v2);
        if(v1==v2) return true;
        else return false;
    }
};

//Solution-2

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p||!q) return false;
        if(p->val!=q->val) return false;
        return(isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
    }
};
