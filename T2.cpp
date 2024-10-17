//LINEAR ORDER TRAVERSAL
#include<iostream>
#include<queue>

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
