
class Solution 
{
    void inorder(TreeNode* root,vector<int >&in)
    {
        if(root==nullptr)
        return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> in;
        inorder(root,in);int i=0,j=in.size()-1;
        while(i<j)
        {
            int sum=in[i]+in[j];
            if(sum==k)
            return true;
            else if(sum>k)j--;
            else i++;
        }
        return false;   
    }
};
