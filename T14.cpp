//merge two bts

//1.convert trees to their inorder vector
//2.merge those two vector to single vector
//3.using mid of that inorder single vector convert 
//  it into a bst
//--------------------------------------------------

//0r;
//1.convert those trees ->sorted linked list
//2.merge two sorted linked list
//3.linked dlist->bst.
class Solution {
    void convertintolinkedlist(TreeNode<int>* root,TreeNode<int>* &head)
{
  //base case
  if(root==nullptr)return NULL:
   convertintolinkedlist(root->rigth,head);
  root->right = head;
  if(head!=nullptr)
  head->left = root;
  head =root;
  convertintolinkedlist(root->left,head);
}
TreeNode* mergeTwoLists(TreeNode<int>* list1, TreeNode<int>* list2)
{
  TreeNode<int> *head=null;
  TreeNode<int> *tail=null;
  while(list1! && list2!)
    {if(list1->val<list2->val)
    {
      if(head==nullptr)
      {
        head=list1;
        tail=list1;
        list1=list1->right;
      }
     else
      {
        tail->right = list1;
        list1->left =tail;
        tail= list1;
        list1= list1->right;
      }
    }
     else
    {
      if(head==nullptr)
      {
        head=list2;
        tail=list2;
        list2=list2->right;
      }
     else
      {
        tail->right = list2;
        list2->left =tail;
        tail= list2;
        list2= list2->right;
      }
    }  
    }
    while(list1!= NULL)
    {
        tail->right = list1;
        list1->left =tail;
        tail= list1;
        list1= list1->right;

    }
    while(list2!=NULL)
    {
        tail->right = list2;
        list2->left =tail;
        tail= list2;
        list2= list2->right;

    }
    return head;
}
int countnodes(Treenode<int> *head)
{
    int cnt=0;
    Treenode<int> *temp=head;
    while(head!=NULL)
    {
        cnt++;temp=temp->right;
    }
    return cnt;
}
TreeNode* sortedlisttoBST(TreeNode<int>* &head,int n)
{
    if(n<=0||root==NULL)return NULL;
    TreeNode<int>* left =sortedlisttoBST(head,int n/2);
    TreeNode<int>* root= head;
    root->left=left;
    head =head->right;//moved the head forward
    TreeNode<int>* right =sortedlisttoBST(head,int n-(n/2)-1);
    return root;
    
}

public:
    TreeNode* canMerge(vector<TreeNode*>& trees){
    TreeNode<int>*head1=NULL;
    convertintolinkedlist(root1,head1);

    head1->left=NULL;
    TreeNode<int>*head2=NULL;
    convertintolinkedlist(root2,head2);
    head2->left=NULL;

    TreeNode<int>*head = mergeTwoLists(list1,list2);
      
    return sortedlisttoBST(head,countnodes(head));
};
