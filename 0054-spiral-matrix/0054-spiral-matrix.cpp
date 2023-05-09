class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0;
        int top=0;
        int right=col-1;
        int bottom=row-1;
        
        while(left<=right && top<=bottom){
            
            
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }  
            }
            
            if(left<=right){
            bottom--;
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            }
            left++;
            
            
            
        }
        
        
        
        
        
        
        
        
        return ans;
        
    }
};