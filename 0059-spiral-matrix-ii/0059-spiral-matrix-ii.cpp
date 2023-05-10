class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));  // Initialize the matrix with size n x n
        
        int row=n;
        int col=n;
        int left=0;
        int top=0;
        int right=col-1;
        int bottom=row-1;
        int num=1;
        while(left<=right && top<=bottom){
            
            
            for(int i=left;i<=right;i++){
                matrix[top][i]=num;
                num++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=num;
                num++;
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=num;
                num++;
            }  
            }
            
            if(left<=right){
            bottom--;
            for(int i=bottom;i>=top;i--){
                matrix[i][left]=num;
                num++;
            }
            }
            left++;
            
            
            
        }
        
        return matrix;

        
        
        
        
        
    }
};