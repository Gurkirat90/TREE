#include<iostream>
using namespace std;
class node
{
public:
int data;
node* left;
node* right;
node(int d)
{ this->data=d;
this->left=NULL;
this->right=NULL;
}
};

node* buildTree(node* root)
{
cout<<"Enter the data : "<<endl;
int data;
cin>>data;
root = new node(data);//enters the data in root

if(data == -1) return NULL;

cout<<"Enter the data for left "<<data<<endl;
root->left =  buildTree(root->left);//enters the data in left node
cout<<"Enter the data for right "<<data<<endl;
root->right =  buildTree(root->right);//enters the data in right node
return root;
}


int main()
{
node* root =NULL;
//creating a tree
root = buildTree(root);
}
