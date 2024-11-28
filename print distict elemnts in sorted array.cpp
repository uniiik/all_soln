#include<bits/stdc++.h>
using namespace std;


int main(){
    
    
    int arr[]={1,1,1,2,2,2,3,3,3,3,4,4,5,5,5,5,6};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // vector<int> result;
    // result.push_back(arr[0]);
    // for(int i=1;i<n;i++){
    //     if(arr[i]!=arr[i-1])
    //         result.push_back(arr[i]);
        

    // }
    // for(auto i:result){
    //     cout<<i<<" ";
    // }
    
    
    set<int> uset;
    for(auto i:arr){
        uset.insert(i);
    }
    for(auto j:uset){
        cout<<j<<" ";
    }
    
    
    
}