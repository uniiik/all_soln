class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int a=arr[0];
        int b=arr[1];
        int c=b-a;
        bool flag=true;
        for(int i=1;i<arr.size();i++){
            if(c!=(arr[i]-arr[i-1]))
               {flag=false;
                break;}
        }
        return flag;
    }
};