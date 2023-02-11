class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        
        unordered_map<int,int> umap;
        for(auto x:nums1)
        {
            for(auto y: nums2)
            {
                umap[x+y]++;
            }
        }
        
        
        int count=0;
        
        for(auto a:nums3)
        {
            for(auto b:nums4)
            {
                if(umap.find(0-a-b)!=umap.end())
                {
                    count+=umap[0-a-b];
                
                }
            }
        }
        
        return count;
        
        
    }
};