
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=0)
            positive.push_back(nums[i]);
        if(nums[i]<0)
            negative.push_back(nums[i]);
    }
        
        
        int m=positive.size();
        int n=negative.size();
        
        if(m ==0 || n==0)
            return nums;
        
        int i=0;
        int j=0;
        vector<int> result;
        while(i<m && j<n){
            result.push_back(positive[i]);
            result.push_back(negative[j]);
            i++; j++;
            
        }
        while(i<m)
        {result.push_back(positive[i]);
         i++;}
        while(j<n){
            result.push_back(negative[j]);
            j++;}
        return result;
        
        
    }
};