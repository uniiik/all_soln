class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);//size of 2 and values in it  is -1
        
        bool flag=0;
           for(int i=0;i<nums.size();i++)
           {
               if(nums[i]==target && flag==0)
               {
                   ans[0]=i;
                   ans[1]=i;
                   flag=1;
               }
               
               else if (nums[i]==target && flag==1)
               {
                   ans[1]=i;
               }
               
           }
            
        
        return ans;
            
          
        
       
        
    }
};