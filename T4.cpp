// INORDER / PREORDER/ POST ORDER TRAVERSALS IN TREE BINARY TREE
#include<iostream>
using namespace std;
void inorder traversal(node* root)
{
  if(root == NULL) return;
  inorder(root ->left);
  cout<<root->data<<endl;
  inorder(root->right); 
}
/* notes(| LNR |)
void inorder(node *temp)
{
  if (temp != NULL)
  {
    inorder(temp->lchild);
    printf("%d", temp->data);
    inorder(temp->rchild);
  } 
}*/

void preorder(node* root)
{
  if(root == NULL) return;
  cout<<root->data<<endl;
  preorder(root ->left);
  preorder(root->right);
}
/* notes(| NLR |)
void preorder(node *temp)
{
  if (temp != NULL)
  {
  printf("%d", temp->data);
    preorder(temp->lchild);
    preorder(temp->rchild);
  } 
}*/
void postorder(node* root)
{
  if(root == NULL) return;
  postorder(root ->left);
  postorder(root->right);
  cout<<root->data<<endl;
}
/* notes(| LRN |)
void postorder(node *temp)
{
  if (temp != NULL)
  {
    postorder(temp->lchild);
    postorder(temp->rchild);
    printf("%d", temp->data);
  } 
}*/
