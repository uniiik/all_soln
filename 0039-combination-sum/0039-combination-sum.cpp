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
/*
create a nested vector ans
now 
 there would be 3 base cases 
        1...if target is 0 then simply return
        2...if target is negative then also simply return 
        3...if our pointer has completed the array and move out of array then also return
        now otherwise,
            if we are not taking the element in our temp then just recursively call next pointer

*/