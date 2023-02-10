class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        int product=1;
        for(int i=0;i<n;i++)
        {
            product*=nums[i];
            result.push_back(product);
        }
        
            product=1;
        
        for(int i=n-1;i>0;i--)
        {
            result[i]=product*result[i-1];
            product*=nums[i];
        }
        
        result[0]=product;
        return result;
        
    }
};
/*
first we will traverse from left to right and push the anser in result vector
our result vector would maintain product of numbers upto itself index


now traverse from right to left
as the last index number would give product of all numbers except itself and as we are moving from left to right and maintaining the product upto that number so it is obvious that the n-2 positon will contain the product for n-1 posn number

reasign product variable by 1
so while travesring from right to left we will give product* result[i-1] 
and update product variable by product * nums[i]

and in last keep 0th index = product
*/

