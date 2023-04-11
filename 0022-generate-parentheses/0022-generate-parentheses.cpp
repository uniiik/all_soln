class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        
        backtrackfunction(n,0,0,"",result);        
        return result;
    }
        
        void backtrackfunction(int n,int open_cnt,int close_cnt,string s,vector<string> &result)
        {
            if(s.size()==n*2){
                result.push_back(s);
                
            }
            
            if(open_cnt<n)
            {
                backtrackfunction(n,open_cnt+1,close_cnt,s+"(",result);
            }
             if(close_cnt<open_cnt)
            {
                backtrackfunction(n,open_cnt,close_cnt+1,s+")",result);
            }
        
        
    }
};