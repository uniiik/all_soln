class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(int i,vector<int>& candidates,int target,vector<int>& temp)
    {
        //3 base case
        if(target==0)
        {
            ans.push_back(temp);
            return ;
            }
        
        if(target<0)
            return ;
        if(i==candidates.size())//means we have reached out of  array
            return ;
        
        
        
        //first type of case case where we are not taking that element in recursion
        solve(i+1,candidates,target,temp);
        
        
        
        temp.push_back(candidates[i]);
        //second case where we are taking back the same element again
          solve(i,candidates,target-candidates[i],temp);
        temp.pop_back();
        
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> temp;
        
        solve(0,candidates,target,temp);
        
        return ans;
        
    }
};