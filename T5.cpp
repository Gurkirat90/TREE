#include<iostream>
using namespace std;
treenode* recursivesearch(treenode* root,int val)
{
  if(root=NULL||root->data==val) return root;
  if(val > root->data) return recursivesearch(root->rigth,val);
  else return recursivesearch(root->left,val);
}
treenode* iterativesearch(treenode* root,int val)
{
  treenode* temp =root;
  while(temp!=NULL)
  {
  if(temp->data == val) return root;
  if(val > temp->data) temp=temp->right;
  else temp=temp->left;
}return NULL;
}

treenode*maxval(node* root)
{
  node* temp = root;
  while(temp!= NULL)
    {
      temp = temp->right;//left in case of min 
    }
  return temp;
}

treenode *inordersuccessor(treenode* root, node* p)
{
  treenode* successor = NULL;
  while(root !=NULL)
    {
      if(p->val >= root->val)root =root->right;
      else 
      {
        successor =root;
        root =root->left;
      }
    }
  return successor;  
}
treenode *inorderpredecessor(treenode* root, node* p)
{
  treenode* predecessor = NULL;
  while(root !=NULL)
    {
      if(p->val <= root->val)root =root->left;
      else 
      {
        successor =root;
        root =root->right;
      }
    }
  return predecessor;  
}
