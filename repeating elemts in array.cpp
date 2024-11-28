#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,1,2,8,9};
 
    unordered_set<int> uset;
    for(auto i:arr){
        if(uset.find(i)!=uset.end()){
            cout<<i<<endl;
        }
        else{
            uset.insert(i);
        }
    }
  
}
