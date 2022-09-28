bool isCircular(Node *head)
{
   
   if(head==NULL )
   {
       return false;
   }
   
   
   
   Node* temp=head;
   
   while(temp!=NULL)
   {
       temp=temp->next;
       if(temp==head)
       {
           return true;
       }
   }
   
  
   return false;
   
}
