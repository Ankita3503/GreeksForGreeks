// Without Reversing The Linked List

int getNthFromLast(Node *head, int n)
{
    Node* fast=head;
    Node* slow=head;
    for(int i=0;i<n;i++)
    {
        if(fast==NULL)
        {
            return -1;
        }
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;  

}
