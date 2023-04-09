class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        
        if(row==0)
            return 0;
        
        vector<vector<int>> dp(row,vector<int>(col,0));
        //initialize first box of dp with first box of grid
        dp[0][0]=grid[0][0];
        
        //fill 1st row
        for(int i=1;i<col;i++)
            dp[0][i]=grid[0][i]+dp[0][i-1];
        
        for(int i=1;i<row;i++)
            dp[i][0]=dp[i-1][0]+grid[i][0];
        //now fill remainig boxes of dp table
        
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        
        
        return dp[row-1][col-1];
        
        
        
        
        
        
        
        
    }
};
/*
we are creating a dp table 
for this we will first first fill the rows by prefix sum of row as there is only one chance for 1st row element i.e; the element can be accesed by moving to right only
same for first column as it can be accesed from top only

now we  will start filling the remaining dp table by taking min of top and left

*/