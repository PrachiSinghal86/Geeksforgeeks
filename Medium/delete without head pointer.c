
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
   // Your code here
   Node *temp;
   temp=node;
   temp=temp->next;
   while(temp!=NULL)
   {
       node->data=temp->data;
       if(temp->next==NULL){
           node->next=NULL;
           break;
       }
       node=node->next;
       temp=temp->next;
   }
   node->next=NULL;

}
