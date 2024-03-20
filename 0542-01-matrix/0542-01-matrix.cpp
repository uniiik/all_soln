class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        vector<vector<int>> visited(row,vector<int>(col,0));
        vector<vector<int>> result(row,vector<int>(col,0));
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j] == 0) {
                    q.push({{i,j},0});
                    visited[i][j]=1; // marking as visited
                } else {
                    visited[i][j]=0; // marking as not visited
                }
            }
        }
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        while(!q.empty()) {
            int row1=q.front().first.first;
            int col1=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            result[row1][col1]=steps;
            for(int i=0;i<4;i++) {
                int nrow=row1+delrow[i];
                int ncol=col1+delcol[i];
                if(nrow>=0 && nrow<row && ncol>=0 && ncol<col && visited[nrow][ncol]==0) {
                    visited[nrow][ncol]=1;
                    q.push({{nrow,ncol},steps+1});
                }
            }
        }
        
        return result;
    }
};
