class Solution {
public:
    vector<int> partitionLabels(string s) {
        //first created a map and stored all the values in it
        unordered_map<char,int> umap;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            umap[ch]=i;
        }
        //created a vector and 2 int variables prev and maxi
        vector<int> ans;
        int prev=-1;
        //bz during pushing result it will become +ve as we are taking 0 based index so it will increase value by 1
        int curr_max=0;
        /*now traverse the loop  and take maxi as maximum of curr_max and index of character at ith index in map
        if the ith value is already reached to maxi means all the elements possible until maxi are in this range only so we can partition our string from here        
        */
        
        for(int i=0;i<s.size();i++)
        {
            curr_max=max(curr_max,umap[s[i]]);
            if(curr_max==i)
            {
                ans.push_back(curr_max-prev);
                prev=curr_max;
            }
            
            
            
        }
        return ans;
        
    }
};