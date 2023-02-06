class Solution {
public:
    int reverse(int x) {
        long y,z=0;
        while(x)
        {
            y=x%10;
            z=10*z+y;
            x=x/10;
        }
        
    if(z>INT_MAX || z<INT_MIN)  return 0;
        
    return int(z);
    }
};