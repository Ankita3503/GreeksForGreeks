//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    private:
    bool detect(int source, vector<int> adj[] ,int visited[])
    {
       
       queue<pair<int,int>>q;
       q.push({source,-1});
       
       visited[source]=1;
       while(!q.empty())
       {
           int node=q.front().first;
           int parent=q.front().second;
           q.pop();
           
           for(auto adj_node : adj[node])
           {
               if(!visited[adj_node])
               {
                   visited[adj_node]=1;
                   q.push({adj_node, node});
               }
               else if(parent!=adj_node)
               {
                   return true;
               }
           }
       }
    }
    
    public:
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) 
    {
         int visited[V]={0};
         for(int i=0;i<V;i++)
         {
          if(!visited[i])
          {
              if(detect(i,adj,visited))
              {
                  return true;
              }
          }
         }
         return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
