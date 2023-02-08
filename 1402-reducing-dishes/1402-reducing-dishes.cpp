class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        int sum=0;
        int start=n-1;
        for(int i=n-1;i>=0;i--)
        {
            sum+=satisfaction[i];
            
            if(sum<0)
                break;
            
            start--;
        }
        
        start++;
        int final=0;
        int time=1;
        for(int i=start;i<n;i++)
        {
            final+=satisfaction[i]*time;
            
            time++;
        }
        return final;
        
    }
};

/*
*/