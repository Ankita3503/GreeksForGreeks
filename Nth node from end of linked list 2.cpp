int getNthFromLast(Node *head, int n)
{
       Node* temp=head;
       Node* current=head;
       int count=0;
       
       while(temp!=NULL)
       {
          
           count++;
           temp=temp->next;
          
       }
       if(n>count)
       {
           return -1;
       }
       
      int length=count-n;
      for(int i=0;i<length;i++)
      {
         current=current->next; 
      }
      
      return current->data;
}
