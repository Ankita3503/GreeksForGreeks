class Solution
{
    public:
   
    struct Node* reverseList(struct Node *head)
    {
        Node* current=head;
        Node* prev=NULL;
        Node* next=NULL;
        
        while(current!=NULL)
        {
           next= current->next;
           current->next=prev;
           prev=current;
           current=next;
        
        }
        return prev;
    }
    
};
