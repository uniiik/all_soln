class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){ 
            // cout<<words[i]<<" "<<"its check is"<<checkpalindrone(words[i])<<endl;
            if(checkpalindrone(words[i])!=-1)
                return words[i];
        }
        return "";
        
    }
    int checkpalindrone(string s){
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
                return -1;    
        }
        return 1;
    }
};