#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    //rotate by 2
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,arr+n);
    sort(arr,arr+n-2);
    sort(arr+n-2,arr+n);
    for(auto i:arr){
        cout<<i<<" ";
    }
  
}
