class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        
        long sum=0;
        long maxi=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];//prefix sum
            maxi=max(maxi,(sum+i)/(i+1));
            
        }
        return maxi;
        
    }
};