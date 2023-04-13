class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n,0);
        vector<int>right(n,0);
      int   maxi=0;
        
        for(int i=0;i<n;i++)
        {
            left[i]=max(maxi,height[i]);
            maxi=left[i];
            
            
        }
        
        maxi=0;
    
         for(int i=n-1;i>=0;i--)
        {
            right[i]=max(maxi,height[i]);
             maxi=right[i];
            
            
        }
   
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=min(right[i],left[i])-height[i];
            
        }
        
        return res;
        
        
    }
};