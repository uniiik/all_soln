class Solution {
public:
    int minimumLength(string s) {
        int left=0;
        int right=s.size()-1;
        while(left < right && s[left]==s[right]){
            char a=s[left];
            while(left<=right && s[left]==a)
                left++;
            while(left<=right && s[right]==a)
                right--;
        }
        return right-left+1;
    }
};