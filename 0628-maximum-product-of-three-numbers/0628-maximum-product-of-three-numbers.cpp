class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result=1;
        int ans=1;
        int n=nums.size();
      int a=nums[n-1]*nums[n-2]*nums[n-3];
       // int b=nums[0]*num[1]*num[2];
        int b=nums[0]*nums[1]*nums[n-1];
        int c=max(a,b);
        return c;
        
    }
};