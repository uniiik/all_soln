class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)
                {
                    sum+=mat[i][j];
                   
                }
                if((i+j)==n-1   && i!=j){
                    sum+=mat[i][j];
                    
                }
            }
        }
        return sum;
        
    }
};