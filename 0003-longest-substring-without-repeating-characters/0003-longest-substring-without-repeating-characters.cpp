class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256,0);
        int l=0;
        int r=0;
        int max_length=0;
        
        while(r<s.length())
        {
            dict[s[r]]++;
            
            while(dict[s[r]]>1)
            {
                dict[s[l]]--;
                 l++;
            }
            
            
            max_length=max(max_length,r-l+1);
            
            r++;
            
        }
        return max_length;
        
    }
};

/*
we have 
*/