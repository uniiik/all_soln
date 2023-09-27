class Solution {
public:
    void dfs(int node, vector<int>& visited, vector<vector<int>>& isConnected) {
        visited[node] = 1; // Mark the node as visited

        for (int neighbor = 0; neighbor < isConnected.size(); neighbor++) {
            if (isConnected[node][neighbor] == 1 && visited[neighbor] == 0) {
                dfs(neighbor, visited, isConnected);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] == 0) {
                dfs(i, visited, isConnected);
                count++;
            }
        }

        return count;
    }
};
