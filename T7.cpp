/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 TreeNode* minval(TreeNode* root){
  while(root->left!=NULL) {root = root->left;}
  return root;
}
class Solution {
public:
       TreeNode* deleteNode(TreeNode* root, int key) 
{
  //base case
  if(root == NULL)
  {
    return root;
  }

  if(root->val ==key)
  {
    //0 child
    if(root->left==NULL&&root->right==NULL)
    {
      delete root;
      return NULL;
    }
    //1 child
    //left child
    if(root->left!=NULL&&root->right==NULL)
    {
      TreeNode* temp = root->left;
      delete root;
      return temp;
    }
    //right child
    if(root->left==NULL&&root->right!=NULL)
    {
      TreeNode* temp = root->right;
      delete root;
      return temp;
    }
    //2 child

      TreeNode* min =minval(root->right);
      root->val=min->val;
      root->right=deleteNode(root->right,min->val);
    
  }
  else if(key<=root->val)
  {
    root->left = deleteNode(root->left,key);
  }
  else 
    {
    root->right = deleteNode(root->right,key);
  }
  return root;
}
};
