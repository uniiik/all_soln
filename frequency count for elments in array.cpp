#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,3,0,10,54,0,85,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    //approach 1
    sort(arr,arr+n);
    int count=1;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            cout<<arr[i-1]<<" appears for  "<< count<<" many times"<<endl;
            count=1;
        }
    }
    cout<< arr[n-1]<<"  appears "<<count<<" many times";
    
    
    //2nd approach
    
    // unordered_map<int,int> umap;
    // for(int i:arr){
    //     umap[i]++;
    // }
    // for(auto j:umap){
    //     cout<< j.first<< " appears "<<j.second<<" times"<<endl;
   
    // }
}