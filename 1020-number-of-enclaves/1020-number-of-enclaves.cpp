class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis,int delrow[],int delcol[]){
        vis[i][j]=1;//mark visited
        
        int m=grid.size();
        int n=grid[0].size();
        
        for(int k=0;k<4;k++){
            int newrow=i+delrow[k];
            int newcol=j+delcol[k];
            if(newrow>=0 && newrow<m && newcol>=0 && newcol<n && !vis[newrow][newcol] && grid[newrow][newcol]==1)
            {
                dfs(newrow,newcol,grid,vis,delrow,delcol);
            }
        }
        
    }
    
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        
        
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        //traverse 1st and last row
        for(int i=0;i<n;i++){
            //first row
            if(grid[0][i]==1 && !vis[0][i])
                dfs(0,i,grid,vis,delrow,delcol);
            //last row
            if(grid[m-1][i]==1 && !vis[m-1][i])
                dfs(m-1,i,grid,vis,delrow,delcol);   
          }
        
        // traverse 1st and last column
            for(int i=0;i<m;i++){
                if(grid[i][0]==1 && !vis[i][0])
                    dfs(i,0,grid,vis,delrow,delcol);
                if(grid[i][n-1]==1 && !vis[i][n-1])
                    dfs(i,n-1,grid,vis,delrow,delcol);  
                
            }
        int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1 && !vis[i][j]) {
            // If this land cell is not visited and it's not connected to the boundary
            // then it's an enclave.
            count++;
        }
    }
}
return count;
    }
};