//height of bt
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root==NULL)return 0;
        int left = maxDepth(root->left); 
        int right = maxDepth(root->right);
        return max(left,right)+1;
    }
};
//minimum heigth of bst
class Solution {
public:
    int minDepth(TreeNode* root) 
    {
        if (root == NULL) return 0;
        if (root->left == NULL) return minDepth(root->right) + 1;
        if (root->right == NULL) return minDepth(root->left) + 1;
        int left = minDepth(root->left); 
        int right = minDepth(root->right);
        
        return min(left, right) + 1;
    }
};
//balanced BT or not(below code is of o[n^2])
class Solution {
int height(TreeNode* root)
 {
    if(root==NULL)
    return 0;
    int left =height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
 }

public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool difference =abs(height(root->left)- height(root->right))<=1;
        if(left&&right&&difference) return true;
        else return false;
    }
};
//--------------------------------------------------------------------------------
//optimised(o[n])
class Solution {
    pair<bool,int> is(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<bool,int> p= make_pair(true,0);
            return p;
        }
        pair<bool,int> left=is(root->left);
        pair<bool,int> right=is(root->right);
        bool rightans= right.first;
        bool leftans= left.first;

        bool difference = abs(left.second-right.second)<=1;
        pair<bool,int>ans;
        ans.second =max(left.second,right.second)+1;
        
        if(leftans && rightans && difference) ans.first=true;
        else ans.first= false;
        return ans;
    }
public:

    bool isBalanced(TreeNode* root) {
        return is(root).first;  
    }
};
