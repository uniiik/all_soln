class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
        
        
        vector<bool > result;
            bool flag=0;
            int a ,n;
        
        for(int i=0;i<candies.size();i++){
            a=candies[i]+extraCandies;
            
            int n=*max_element(candies.begin(),candies.end());
            if(a>=n)
                flag=1;
            else
                flag=0;
            
            result.push_back(flag);
        }
        
        return result;
        
    }
};