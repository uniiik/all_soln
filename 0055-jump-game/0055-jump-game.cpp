class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reachable=0;
        
        for(int i=0;i<n;i++)
        {
           if(reachable<i)
               return false;
            
            reachable=max(reachable,nums[i]+i);
        }
        
        return true;
    }
};
/*

reachable is index posn upto which we can jump and reach by the steps taken while jumping(we dont want to understand where we took how much steps , we only want is that we can reach or not)

while traversing the loop we will see if the index posn where we are standing is less or equal to the posn we can reach then we will move forward otherwise we will return false

so if it is reachable then we will take max of reachable and nums[i]+1(because nums[i] is showing number and index posn it is 1 larger)



*/