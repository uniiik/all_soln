class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        int n=nums.size();
        vector<int> result;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
        dq.push_back(i);            
            
        }
        
        
        
        
        
        
        for(int i=k;i<n;i++)
        {
            result.push_back(nums[dq.front()]);
            
             while(!dq.empty() && dq.front()<=i-k)
             {
                 dq.pop_front();
             }
            
            while(!dq.empty() && nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        result.push_back(nums[dq.front()]);
        return result;
        
        
    }
};
/*
we are using deque data structure

*/