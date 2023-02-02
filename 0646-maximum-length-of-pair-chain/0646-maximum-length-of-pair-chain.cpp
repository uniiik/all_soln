class Solution {
public:
    static bool compare(vector<int> &a,vector<int> &b)
    {
        return a[1]<b[1];
    }
    
    
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),compare);
       
        int count=1;
        int current_end=pairs[0][1];
        for(int i=1;i<pairs.size();i++)
        {
            if(pairs[i][0]>current_end)
                {current_end=pairs[i][1];
                count++;}
        }
        return count;
    }
};