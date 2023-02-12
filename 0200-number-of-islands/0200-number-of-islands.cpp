class Solution {
public:
    
    
    
    bool isValid(int i, int j, int n , int m, vector<vector<char>>& grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j] == '1')
            return true;
        
        return false;
    }
    
    
    
    
    void recursive_function(int i,int j,int n,int m,vector<vector<char>>&grid)
    {
        grid[i][j]='0';
        
        if(isValid(i+1, j, n, m , grid))
            recursive_function(i+1, j, n, m, grid);
         if(isValid(i, j+1, n, m , grid))
            recursive_function(i, j+1, n, m, grid);
        if(isValid(i-1, j, n, m , grid))
            recursive_function(i-1, j, n, m, grid);
        if(isValid(i, j-1, n, m , grid))
            recursive_function(i, j-1, n, m, grid);
    }
    
    
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                 {
                    count++;
                    recursive_function(i,j,n,m,grid);}
            }
        }
        return count;
    }
};

/*
we are just simply checking if we encounter any number which equals to 1 then we will call  recursive function in which we will add all 1 so that it can form an island

in recursive function we again call recursive function itself if the number is not out of bound
*/