class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=word1.size();
        int b=word2.size();
        int m=min(a,b);
        string s="";
        int c=0;
        for(int i=0;i<m;i++)
        {
            s+=word1[i];
            s+=word2[i];
            c=i;
            
        }
        
        if(a>b)
        {
            string r=word1.substr(c+1);
            s+=r;
        }
        if(b>a)
        {
            string p=word2.substr(c+1);
            s+=p;
        }
        
        return s;
        
    }
};