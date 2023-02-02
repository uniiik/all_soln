class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        
        for(auto x:umap)
        {
            if(x.second==1)
                ans.push_back(x.first);
            
        }
        return ans;
        
        
        
        
    }
};


      