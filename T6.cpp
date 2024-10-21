#include<iostream>
using namespace std;
class node
{
int data;
node* left;
node* right;
public:
node(int d)
{
  this ->data =d;
  this ->left =NULL;
  this ->right=NULL;
}
};
node* insertintobst(node* root,int d)
{
  if (root == NULL)
  {
    root =new node(d);
    return root;
  }
  if(d >= root->data)
    root->right=insertintobst(root->data,d);
  else
    root->left=insertintobst(root->left,d);
}
void takeinput()
{
  int data;
  cin>>data;
   while (data =-1)
     {
       insertintoest(root,data);
       cin>>data;
     }
}
int main()
{
  node *root=NULL;
  cout<<"Enter the data to create BTS"<<endl;
  takeinput();
}
