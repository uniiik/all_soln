#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,1,2,3,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    // 1st..............wayyyyy
    // unordered_set<int> set;
    // for(int i=0;i<size;i++){
    //     set.insert(arr[i]);
    // }
    // cout<<set.size();
    
    
    //2nd..........way
    unordered_map<int,int> umap;
    for(int i:arr){
        umap[arr[i]]++;
    }
    cout<<umap.size();
    
    
}