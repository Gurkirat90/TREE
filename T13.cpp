class Solution {
    TreeNode* conversion(vector<int> &in,int i,int n)
    {
        if(i>n) return nullptr;
        TreeNode* root= new TreeNode(in[(i+n)/2]);
        root->left =conversion(in,i,((i+n)/2)-1);
        root->right =conversion(in,((i+n)/2)+1,n);
        return root;
    }
    void inorder(TreeNode* root,vector<int>&in)
    {
        if (root==nullptr)return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }

public:
    TreeNode* balanceBST(TreeNode* root){
        vector<int> in;
        inorder (root,in);
        return conversion(in,0,in.size()-1);  
    }
};
