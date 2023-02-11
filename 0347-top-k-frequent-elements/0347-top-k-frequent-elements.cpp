class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        //for creating a min heap containing hashmap values
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_heap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
       
     for(auto x:umap)
     {
         min_heap.push({x.second,x.first});
         if(min_heap.size()>k)
             min_heap.pop();
         
     }
        
        vector<int> res;
        while(k>0)
        {
            res.push_back(min_heap.top().second);
            min_heap.pop();
            k--;
        }
        
        
        
        
        
        return res;
    }
};