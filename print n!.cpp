#include<bits/stdc++.h>
using namespace std;
int recursion(int n,int result){
    if(n==0){
        
        return 1;
    }
    
    return n*recursion(n-1,result);
    
}
int main(){
    int n=5;
    int result=1;
    int answer=recursion(n,result);
    cout<<answer;
    // int result=1;
    // while(n>0){
    //     result*=n;
    //     n--;
    // }
    
    // cout<<result;
}