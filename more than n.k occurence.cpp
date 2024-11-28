#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={30,20,10,10,20,30,20,30};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int z=n/k;
    unordered_map<int,int> umap;
    for(auto i:arr){
        umap[i]++;
    }
    for(auto i:umap){
        if(i.second>z){
            
            cout<<i.first<<endl;
        }
    }
    
    
}