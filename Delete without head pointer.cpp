class Solution
{
    public:
   
    void deleteNode(Node *del)
    {
        del->data=del->next->data;
        del->next=del->next->next;
    }

};

/*
class Solution
{
    public:
   
    void deleteNode(Node *del)
    {
        *del=*del->next;
    }

};
*/
