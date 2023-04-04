class Solution {
public:
    int partitionString(string s) {
        set<char> set;
        
        int count=1;
        for(auto i: s)
        {
            if(set.find(i)!=set.end())
            {
                set.clear();
                count++;
            }
            set.insert(i);
        }
        return count;
        
        
    }
};