//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        /*first we will create a vector bfs in which we will push our breadth first search elements and we also create a 
        array of size n which will take record of elemnts visited and a queue to traverse
        
        */
        vector<int> bfs;
        int visited[V]={0};
        queue<int> q;
        
        q.push(0);
        visited[0]=1;
        
        
        while(!q.empty()){
            int n=q.front();
            q.pop();
            bfs.push_back(n);
            
            for(auto i:adj[n]){// we are seeing neighbour elments of n in the adjaceny list
            
                if(visited[i]==0){
                    q.push(i);
                    visited[i]=1;
                }
            }
            
        }
        return bfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends