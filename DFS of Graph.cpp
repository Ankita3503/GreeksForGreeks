//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      void dfs(int start, vector<int> &ans, int visited[] ,vector<int>adj[])
      {
          visited[0]=1;
          ans.push_back(start);
          for(auto i:adj[start])
          {
              if(!visited[i])
              {
                  visited[i]=1;
                  dfs(i,ans,visited,adj);
              }
          }
      }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int start=0;
        vector<int>ans;
        int visited[V]={0};
        dfs(start,ans,visited,adj);
        
        return ans;
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
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
