//LINEAR ORDER TRAVERSAL
#include<iostream>
#include<queue>
using namespace std;

void linearOrderTraversal(node* root)
{
queue<node*>q;
q.push(root);
q.push(NULL)
while(!q.empty())
{
node* temp = q.front();
q.pop();
if(temp=NULL)
{
cout<<endl;
if(!q.empty()) q.push(NULL);
}
else
{cout<<temp->data<<" ";
if(temp->left)
{
q.push(temp->left);
}
if(temp->right)
{
q.push(temp->right);
}
}

}
int main()
{
node* root =NULL;
root = buildTree(root);// PRESENT IN T1 FILE
cout<<"printing the level order traversal"<<endl;
levelOrderTraversal(root);
}

//BUIDLING A TREE FROM LEVEL ORDER TRAVERSAL
void btflot(node* &root)
{
  queue<node*> q;int data;
  cin>> data;
  root = new node(data);
  q.push(root);
  while(!q.empty())
    {
      node* temp = q.front();
      q.pop();
      int ldata;cin>> ldata;
      if(ldata!= -1)
      {
        temp -> left = new node(ldata);
        q.push(temp-> left);
      }
       int rdata;cin>> rdata;
      if(rdata!= -1)
      {
        temp -> right = new node(rdata);
        q.push(temp-> right);
      }
    }
    
}
