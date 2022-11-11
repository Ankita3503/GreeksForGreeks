

class Solution {
  public:
      void in(Node* root ,vector<int> &ans)
      {
         if(root==NULL)
         {
             return ;
         }
         
             in(root->left,ans);
             ans.push_back(root->data);
             in(root->right,ans);
           
             
      }
   
    vector<int> inOrder(Node* root) {
         vector<int>ans;
         
         in(root,ans);
         return ans;
    }
};
