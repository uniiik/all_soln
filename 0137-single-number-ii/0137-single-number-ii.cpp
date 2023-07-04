class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt;
        unordered_map<int,int> umap; 
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;            
        }
        for(auto j:umap){
            
            if(j.second==1)
                cnt=j.first;
        }
        
        return cnt;
        
    }
};