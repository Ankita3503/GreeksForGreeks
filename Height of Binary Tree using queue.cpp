
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        
        queue<Node*>q;
        q.push(node);
        int height=0;
        Node* temp=NULL;
        
        while(!q.empty())
        {
            int s=q.size();
            
            while(s--)
            {
               temp=q.front();
                 q.pop();
                 
                 if(temp->left)
                 {
                     q.push(temp->left);
                 }
                 if(temp->right)
                 {
                     q.push(temp->right);
                 }
                 
            }
            height++;
        }
        return height;
    }
};
