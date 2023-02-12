class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> umap;
        for(auto i:nums)
        {
            umap[i]++;
        }
        
        for(auto x:umap)
        {
            if(x.second>n/2)
                return x.first;
        }
        return 0;
    }
};