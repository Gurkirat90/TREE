void inorder(Treenode<int>* root,vector<int>&in)
{
  if (root==nullptr)return;
  inorder(root->left,in);
  in.push_back(root->val);
  inorder(root->right,in);
}
Treenode<int>* flatten(Treenode<int>* root)
{
  vector<int>in;
  inorder(root,in);
  int n =in.size();
  Treenode<int>* nroot = new Treenode<int>(in[0]);
  Treenode<int>* curr = nroot;
   for(int i=0;i<n;i++)
     {
       Treenode<int>* temp = new Treenode<int>*(in[i]);
       curr->left =NULL;
       curr->right = temp;
       curr=temp;
     }
  curr->left =NULL;curr->right = NULL;
  return nroot;
}
