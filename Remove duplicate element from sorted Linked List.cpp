Node *removeDuplicates(Node *head)
{
   if(head==NULL || head->next==NULL)
   {
       return head;
   }
   

  Node* current=head;
  
  while(current!=NULL && current->next!=NULL)
  {
      if(current->data==current->next->data)
      {
          current->next=current->next->next;
      }
      else
      {
      current=current->next;
      }
  }
  
  return head;
   
}
