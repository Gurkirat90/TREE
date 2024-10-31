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
void convertintolinkedlist(Treenode<int>* root,Treenode<int>* &head)
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
TreeNode* mergeTwoLists(TreeNode* list1, TreeNode* list2)
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
        list2= list2->right;
      }
    }  
    }
}
//to be continued

