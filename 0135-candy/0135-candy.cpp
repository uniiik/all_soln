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

/*
first initialze  a vector candies and assign 1 as initial value as it is min condn
now traverse loop from left to right and if rating of ith is greater than i-1 th and no candies at index i is less than or equal to i-1 th index then increase count in vector
now again traverse from right to left and do same process 
*/