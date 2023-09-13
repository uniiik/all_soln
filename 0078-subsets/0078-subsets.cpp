class Solution {
public:
    void function(int index,vector<int> arr, vector<vector<int>> &result, vector<int> ans){
        
       if (index== arr.size()){
           result.push_back(ans);
           return;
       } 
        
        
        
        
        
        // to not the number
        function(index+1,arr,result,ans);
        
        //to pick the number
        ans.push_back(arr[index]);
        function(index+1,arr,result,ans);
        ans.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        function(0,nums,result,ans);
        return result;
        
    }
};