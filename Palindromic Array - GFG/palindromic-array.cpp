//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    
    	for(int i=0;i<n;i++)
    	{
    	    int reversed_number=0;
    	    int x=a[i];
    	    while(x> 0) {
                 int remainder = x % 10;
                 reversed_number = reversed_number * 10 + remainder;
                  x /= 10;
                    }
    	   
    	    if(a[i]!=reversed_number)
    	        {return 0;
    	        break;}
    	    
    	}
    	
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends