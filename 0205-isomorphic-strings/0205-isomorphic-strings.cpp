class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> mp;
        set<char> x;
        
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i])==0 && x.count(t[i])==0)
            {
                mp[s[i]]=t[i];
                x.insert(t[i]);
            }
            /*this if statement means the element is not present in map and set both then we insert it into set and map the value of ith value in string 's' to ith value in 't'.  
            */
            
            else if(mp.count(s[i])==0 && x.count(t[i]))
                return false;
            /*it means the element is not mapped (not present in map)  but present in set means some other is mapped to that elemnt in set then we will return false*/
            
            else if(mp[s[i]]!=t[i])
                return false;
                /*it means the elemnt is present in set but no eleomnt is mapped to it in set*/
            
            
        }
        return true;
    }
};