#include<bits/stdc++.h>
using namespace std;


int main(){
    
    
    int arr[]={1,2,3,4,5,6,1};
    int i=0;
    int j=sizeof(arr)/sizeof(arr[0])-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(auto i:arr){
        cout<<i<<endl;
    }
    
    
  
    
    
    
}