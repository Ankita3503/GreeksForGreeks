
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        int visited[V]={0};
         visited[0]=1;
         queue<int>q;
         q.push(0);
         
         while(!q.empty())
         {
             int temp=q.front();
             q.pop();
             
             ans.push_back(temp);
             for(auto i:adj[temp])
             {
                 if(!visited[i])
                 {
                     visited[i]=1;
                     q.push(i);
                 }
             }
         }
         return ans;
    }
};

