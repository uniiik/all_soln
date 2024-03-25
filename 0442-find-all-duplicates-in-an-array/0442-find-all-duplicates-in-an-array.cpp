class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i:nums){
            umap[i]++;
        }
        vector<int> result;
        for(auto x:umap){
            if(x.second>1)
                result.push_back(x.first);
        }
        return result;
    }
};