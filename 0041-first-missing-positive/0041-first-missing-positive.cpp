class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        int max=*max_element(nums.begin(),nums.end());
        for(auto x:nums)
            umap[x]++;
        
        
        if(max<0)
            return 1;
        
        for(int i=1;i<max;i++)
        {
            if(umap[i]==0)
                return i;
            
        }
        return max+1;
        
    }
};