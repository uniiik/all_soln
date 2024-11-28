#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={7,5,3,4,5,6};
    
      int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,arr1+size1);
    sort(arr2,arr2+size2);
    
    
    
    //we will use 2 pointer approach
    // int i=0;int j=0;
       // while(i<size1 || j< size2){
    //     if(arr1[i]==arr2[j])
    //     {
    //         cout<<arr1[i];
    //         break;
    //     }
        
    //     else if(arr1[i]<arr2[j]){
    //         i++;
    //     }
    //     else if(arr1[i] > arr2[j]){
    //         j++;
    //     }
        
    // }
    
    
    unordered_set<int> set;
    for(int i: arr1){
        set.insert(i);
    }
    for(int j:arr2){
        if(set.find(j)!=set.end()){
            cout<< j<<endl;
            break;
        }
    }
    
    
    
    
    
    
    
    
    
}