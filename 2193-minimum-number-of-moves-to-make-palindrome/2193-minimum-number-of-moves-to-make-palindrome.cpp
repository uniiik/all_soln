class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.size();
        int lt=0;
        int rt=n-1;
        int count=0;
        
        while(lt<rt)
        {
            int l=lt, r=rt;
            while(s[l]!=s[r])//we are checking whether lth and rth posn are same or not
                r--;
            
            //now when we come out of loop we have got our r value now check
            if(l==r)
            {
                swap(s[r],s[r+1]);
                count++;
                continue;
                }
//it means we have reached from where we have started so in this case we will sawap rth posn with r+1 th posn 
            /* for eg in case of abb let l=0 and r=2
            now when when checking loop we will getour r as equal to l as it is only possible part
            */
            
            else
            {
                while(r<rt)
                {
                    swap(s[r],s[r+1]);
                        count++;    r++;
                    
                }
            }
            
            lt++;
            rt--;
                
            
            
        }
        return count;
        
    }
};

/*
just imagine we are divinding the whole string in half equal parts
now initilize lt as 0 and rt as n-1 
now run while loop until lt becomes greater then rt

inside loop initilize l as lt and ... r as rt



*/