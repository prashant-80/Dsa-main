//base case = if there is no character left in the string retunr empty string 
//assumption = 
//self work = 

#include<iostream>
using namespace std;

string f(string &s,int idx,int n){
    if(idx==n) return "";
    string curr;
    curr+=s[idx];
    return (s[idx]=='a'? "":curr) + f(s,idx+1,n);
}

int main(){
    string s="abcax";
    int  idx=0;
    string result=f(s,idx,5);
    cout<<result;
}