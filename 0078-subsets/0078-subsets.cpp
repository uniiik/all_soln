class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        backtrackfunction(nums,subset,result,0);
        return result;
    }
        
        
        
      void  backtrackfunction(vector<int> &nums,vector<int>&subset,  vector<vector<int>> &result,int start)
        {
            result.push_back(subset);
            for(int i=start;i<nums.size();i++)
            {
                subset.push_back(nums[i]);
                backtrackfunction(nums,subset,result,i+1);
                subset.pop_back();
            }
            
            
        
        
    }
};
