class FindSumPairs {
public:
    unordered_map<int,int> umap1,umap2;
    vector<int> ans;//we have another vector ans for the behalf of nums2 so that when we have to update the vector num2 we will update ans instead of nums2
    
    
    
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        ans=nums2;        
        
        for(int i=0;i<nums1.size();i++)
        {
            umap1[nums1[i]]++;
        }
         for(int i=0;i<nums2.size();i++)
        {
            umap2[nums2[i]]++;
        }
        
    }
    
    
    
    
    
    
    
    void add(int index, int val) {
        umap2[ans[index]]--;//decrease the frequency of current posn element as we are adding another  no 
        ans[index]+=val;
        umap2[ans[index]]++; //the new generated element should be inserted into map 
        
    }
    
    
    
    
    
    
    
    int count(int tot) {
        int count=0;
        for(auto x:umap1)
        {
            count+=((x.second)*(umap2[tot-x.first]));//it means we are multiplying the count of elemnt in map1 with the elemnt we get from no tot(7)- x.first which is a random number and now the number we get from this subtraction is present in map2 then we will add it into count
        }
        
        return count;
        
        
        
        
    }
};

