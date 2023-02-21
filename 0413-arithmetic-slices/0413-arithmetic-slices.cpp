class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int count=0;
        int total=0;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
                {count+=1;
                total+=count;}
            
            else
            {
                count=0;
            }
            
            
            
        }
        
        return total;
    }
};
/*
we will start our loop from 3rd posn or 2nd index

just check the cond..... if ok.....then increase count by 1
and increase total(bz it is a.p. series) also

if this cond...false then make count as 0 as our chain of a.p. is broken 

*/