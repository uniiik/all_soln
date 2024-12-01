#include<bits/stdc++.h>
using namespace std;
bool  checkrotation(string str1,string str2){
  if(str1.length()!=str2.length() || str1.empty()){
      return false;
  }
  string str=str1+str1;
    return str.find(str2) != string::npos; // Check if str2 is a substring
}
int main(){
    string str1="ABCD";
    string str2="DABC";
   if (checkrotation(str1, str2)) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are not rotations of each other." << endl;
    }

    
    
    
}