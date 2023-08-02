class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        backtrackfunction(nums,result,0,n-1);
        return result;
        
                }
        
        
        
       void  backtrackfunction(vector<int>& nums, vector<vector<int>> &result,int start,int end)
        {
            if(start==end)
                result.push_back(nums);
            
          for(int i=start;i<=end;i++)
          {
              swap(nums[i],nums[start]);
              backtrackfunction(nums,result,start+1,end);
              swap(nums[start],nums[i]);
          }
            
            
            
            
        }
        
    
};