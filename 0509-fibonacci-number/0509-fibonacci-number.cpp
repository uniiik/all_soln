class Solution {
public:
    int fib(int n) {
         vector<int> array(n+1);
        
        if(n<2)
            return n;
        
        array[0]=0;
        array[1]=1;
      
        for(int i=2;i<=n;i++)
        {
            array[i]=array[i-1]+array[i-2];
        }
        
        
        return array[n];
        
    }
};