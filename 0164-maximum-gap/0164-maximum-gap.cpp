class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int curr_gap=0;
        int result=0;
        for(int i=0;i<n-1;i++)
        {
            curr_gap=nums[i+1]-nums[i];
            result=max(result,curr_gap);
        }
        return result;
        
    }
};