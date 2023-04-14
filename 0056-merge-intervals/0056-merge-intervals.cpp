class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        vector<int> ans;
        
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>& a,vector<int> &b){return a[0]<b[0];});
        
        
        
        if(n==0)
            return result;
        vector<int> curr=intervals[0];
        for(int i=1;i<n;i++)
        {
            if(curr[1]<intervals[i][0])
            {
                result.push_back(curr);
                curr=intervals[i];
            }
            
            else{
                curr[1]=max(intervals[i][1],curr[1]);
            }
        }
        
        result.push_back(curr);
        
        return result;
        
    }
};