class Solution {
public:
    
    
    void dfs(int i,int j,vector<vector<char>>& board,vector<vector<int>>& vis,int delrow[],int delcol[] )
    {
        vis[i][j]=1;//marking as visited
        
        int row=vis.size();
        int col=vis[0].size();
        
        //now check all four sides
        for(int k=0;k<4;k++){
            int newrow=i+delrow[k];
            int newcol=j+delcol[k];
            //check if it valid means it is within matrix
            if(newrow>=0 && newrow<row && newcol>=0 && newcol<col && !vis[newrow][newcol] && board[newrow][newcol]=='O')
                dfs(newrow,newcol,board,vis,delrow,delcol);
        }
    }
    
    
    void solve(vector<vector<char>>& board) {
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        //traverse 1st row and last row
        for(int i=0;i<n;i++){
            
            //traversing first row
            if(board[0][i]=='O' && !vis[0][i])
                dfs(0,i,board,vis,delrow,delcol);
            
            //traversing last row
            if(board[m-1][i]=='O' && !vis[m-1][i])
                dfs(m-1,i,board,vis,delrow,delcol);
        }
        
        //traverse 1st and last column
        for(int j=0;j<m;j++){
            //traversing 1st column
            if(board[j][0]=='O' && !vis[j][0])
                dfs(j,0,board,vis,delrow,delcol);
            
            //traversing last column
            if(board[j][n-1]=='O' && !vis[j][n-1])
                dfs(j,n-1,board,vis,delrow,delcol);
        }
        
        //now it is time  to mark all 'O' left behind to 'X'
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        
    }
};
/*
so here we are just checking border values and if at border we encounter anu 'O' which is not visited then we call dfs and mark all them as visited , so that after marking all 'O' which are connected to border as visited , means we will not convert it into 'X' as they cannot be four sided sorrounded by 'X'.
and after all traversal we will just mark all 'O' which are left behind to 'X'.
*/