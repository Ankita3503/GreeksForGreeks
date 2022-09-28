// method 2. using reverse linked list

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node* slow)
    {
        Node* current=slow;
        Node* next=NULL;
        Node* prev=NULL;
        
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        
        Node* slow=head;
        Node* fast=head;
       
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        Node* rev=reverse(slow->next);
        
        Node* head1=head;
        Node* head2=rev;
        
        while( head2!=NULL)
        {
            if(head1->data!=head2->data)
            {
                return false;
            }
                head1=head1->next;
                head2=head2->next;
        }
        return true;
    }
};
