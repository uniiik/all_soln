class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string word="";
        for(int i=0;i<s.size();i++){
            if (i==s.size()-1 && s[i]!=' '){//means we reached for last word from string and we have to push it also but in coming conditions we are checking on to push while space is occured  for the last word space might not come so that's why we have pushed it by this way
                word.push_back(s[i]);
                temp.push_back(word);
            }
            if(s[i]==' ' && word.length()!=0){
                temp.push_back(word);
                word="";}
            if(s[i]==' ' && word.length()==0){
               continue;
               }

            else{
                word.push_back(s[i]);}

            }
            for(auto i:temp){
                cout<<i<<endl;
            }


            string result="";
            int n=temp.size();
            for(int j=temp.size()-1;j>0;j--){

                result+=temp[j];
                result+=" ";                
            }
            result+=temp[0];


            return result;
        
    }
};