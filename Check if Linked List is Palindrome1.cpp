// method 1 using array

class Solution{
  public:
    //Function to check whether the list is palindrome.
    vector<int> arr;
    bool isPalindrome(Node *head)
    {
       
       Node* temp=head;
       
       while(temp!=NULL)
       {
          arr.push_back(temp->data);
          
          temp=temp->next;
       }
       int start=0 , end=arr.size()-1;
       
      while(start<=end)
      {
          if(arr[start]==arr[end])
          {
              start++;
              end--;
          }
          else
          {
              return false;
          }
      }
      return true;
    }
};
