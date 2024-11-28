#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,20,13,44,5};
    int arr2[]={27,50,93,48,56,6};
    
    // 1st.....way
    // vector<int> result;
    // for(auto i:arr1){
    //     result.push_back(i);
    // }
    // for(auto j: arr2){
    //     result.push_back(j);
    // }
    // sort(result.begin(),result.end());
    // for(int i=0;i<result.size();i++){
    //     cout<<result[i]<<" ";
    // }



    // 2nd .....way
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,arr1+size1);
    sort(arr2,arr2+size2);
    vector<int> result;
    int i=0;int j=0;
    while(i<size1 &&   j<size2){
        if(arr1[i]==arr2[j])
        {result.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]<arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
         else if(arr1[i]>arr2[j]){
            result.push_back(arr2[j]);
            j++;
        }
        
    }
     while (i < size1) { result.push_back(arr1[i]); i++; } 
     while (j < size2) { result.push_back(arr2[j]); j++; }
    for(int i=0;i<result.size();i++){
        cout<< result[i]<<" ";
    }
    
    
    
}