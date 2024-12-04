class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str="";
        int j=0;
         int n = s.length();
        int m = spaces.size();
        for(int i=0;i<n;i++){
            if (j < m && spaces[j] == i) {
                str += " ";  
                j++;
              
            }
           str+=s[i];
            
        }
        return str;
    }
};