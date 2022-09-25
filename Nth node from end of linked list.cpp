// Using Reverse Linked List 

int getNthFromLast(Node *head, int n)
{
    Node* current=head;
    Node* prev=NULL;
    Node* next=NULL;
    
    while(current!=NULL)
    {
        
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        
    }
    for(int i=0;i<n-1;i++)
    {
        if(prev==NULL)
        {
            return -1;
        }
        prev=prev->next;
    }
    if(prev==NULL)
    {
        return -1;
    }
   return prev->data;
}
