class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        
        sort(people.begin(),people.end());
        int i=0;
        int n=people.size();
        int j=n-1;
        
        
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
                {count++;
                i++;
                j--;}
            else{
                count++;
                j--;
            }
            
        }
        
        return count;
        
    }
};