class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        
       vector<int> candies(n,1);
        
        
        
        //base case
        if(n==1)
            return 1;
        
        //left traversal 
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1] && candies[i]<=candies[i-1])
                candies[i]=candies[i-1]+1;
        }
        
        //right traversal
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1] && candies[i]<=candies[i+1])
                candies[i]=candies[i+1]+1;
        }
        
        
        int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=candies[i];
    }
        
        
        
        
        return cnt;
    }
};