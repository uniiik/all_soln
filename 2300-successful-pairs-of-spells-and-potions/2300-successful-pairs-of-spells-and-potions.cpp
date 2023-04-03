class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        int n=spells.size();
        int m=potions.size();
        vector<int> result;
        sort(potions.begin(),potions.end());
        int maxpotionvalue=potions[m-1];
        
        for(int i=0;i<n;i++)
        {
            int spell=spells[i];
            long long minpotionvalue=ceil((1.0*success)/spell);
            if(minpotionvalue>maxpotionvalue)
            {
                result.push_back(0);
                continue;
            }
            int index=lower_bound(potions.begin(),potions.end(),minpotionvalue)-potions.begin();
            int count=m-index;
            result.push_back(count);
            
        }

        return result;
    }
};