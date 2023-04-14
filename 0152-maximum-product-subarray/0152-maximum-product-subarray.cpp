class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int result=nums[0];
        int curr=1;
        for(int i=0;i<nums.size();i++)
        {
            curr*=nums[i];
            result=max(result,curr);
            if(curr==0)
                curr=1;
        }
        
        curr=1;
        for(int i=nums.size()-1;i>=0;i--){
            
            curr*=nums[i];
            result=max(result,curr);
            if(curr==0)
                curr=1;
            
            
        }
        return result;
        
        
    }
};