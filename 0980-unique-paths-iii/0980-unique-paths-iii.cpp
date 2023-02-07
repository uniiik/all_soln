class Solution {
public:
    
    
    int dfs(int x,int y,int k,int p,int &zero_count,int cnt,vector<vector<int>> &grid)
    {
        if(x<0 or y<0 or x>=k or y>=p or grid[x][y]==-1 or grid[x][y]==3)
            return 0;
        
        if(grid[x][y]==2)//ending cell
        {
            //if all empty cells visited then returning 1 else 0
            if(cnt-1 == zero_count) return 1;
            return 0;
            
        }
        
        grid[x][y]=3;  //mark as visited
        
        
        int up = dfs(x-1,y,k,p ,zero_count,cnt+1,grid);
        int down = dfs(x+1,y,k,p,zero_count,cnt+1,grid);
        int left = dfs(x,y-1,k,p,zero_count,cnt+1,grid);
        int right = dfs(x,y+1,k,p,zero_count,cnt+1,grid);
    
        grid[x][y]=0;//mark as unvisted
        
        
        return up+down+left+right;
        
    }
    
    
    
    
    
    
    
    
    
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int sx=0;
        int sy=0;
        int zero_count=0;
        int k=grid.size();
        int p=grid[0].size();
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<p;j++)
            {
                if(grid[i][j]==0)//if cell is empty
                    zero_count++;
                if(grid[i][j]==1)//if it is starting cell
                {
                    sx=i;//starting row index
                    sy=j;//starting column index
                }
            }
           
        }
         return dfs(sx,sy,k,p,zero_count,0,grid);
        
        
        
        
    }
};