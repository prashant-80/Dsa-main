#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    string orgstr=str;
    //reverse 2nd half of the string
    // reverse(str.begin()+str.length()/2,str.end());
    // cout<<str;
    reverse(str.begin(),str.end());
    if(orgstr==str) cout<<"its a palindrome";
    else cout<<"Not a palindrome";
}
    