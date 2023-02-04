//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
      sort(a.begin(),a.end());
   
    //we are takin 2 pointer approach;
    long long diff=INT_MAX;
   // we are taking i+m-1 because in loop we can only walk upto that place when we are not out of boundary
   //and m is no of students 
    for(int i=0;i+m-1<n;i++)
    {
       long long curr_diff=a[i+m-1]-a[i];
       diff=min(diff,curr_diff);
    }
    return diff;
  
    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends