//validate bst

class Solution {
    private:
    bool isbst(TreeNode* root, long min, long max) {
    if (root == NULL) return true;
    if (root->val <= min || root->val >= max) return false;
    return isbst(root->left, min, root->val) && isbst(root->right, root->val, max);
}

public:
    bool isValidBST(TreeNode* root) {
        return isbst(root, LONG_MIN, LONG_MAX); 
    }
};
//kth smalest elment in bst

class Solution {
    private:
    int solve(TreeNode* root , int &i, int k)
 {
    if(!root)return -1;
    //l
    int left =solve(root->left,i,k);
    if(left!=-1)return left;
    //n
    i++;
    if(i==k)return root->val;
    //r
    return solve(root->right,i,k);

 }
public:
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
    return solve(root,i,k);
    }
};
