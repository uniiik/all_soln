#include<bits/stdc++.h>
using namespace std;
int main(){
   string str="ABCDCBaA";
//   string str2=str;
//   reverse(str2.begin(),str2.end());
   
//   if(str==str2)
//   cout<<"strings are equal";
    
    //2nd approach
    // stack<char> st;
    // for(int i=0;i<str.size();i++){
    //     st.push(str[i]);
    // }
    // int count=0;
    // while(!st.empty()){
    //     if(st.top()==str[count]){
    //         st.pop();
    //         count++;
    //     }
    //     else{
    //         cout<<"strings are not equal";
    //         break;
    //     }
    // }
    
    
    //3rd approach
    //we will use 2 pointer
    int i=0; int j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j])
        {
            cout<<"not equal";
            break;
        }
        i++;
        j--;
        
    }
   
}