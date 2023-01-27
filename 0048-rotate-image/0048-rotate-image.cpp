class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        
        
        //reverse the row
        for(int i=0;i<r;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
       
        
    }
};
/*
for rotating a matrix first we take a transpose of matrix
then we reverse the rows so we get rotated matrix
*/