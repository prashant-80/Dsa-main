#include<iostream>
using namespace std;
#include<stack>

bool balanced(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else {
            if(st.size()==0 ) return false;
            char ch = st.top();
            st.pop();
            if((ch=='(' && s[i]==')') || (ch=='{' && s[i]=='}') || (ch=='[' && s[i]==']') );
            else return false;
        }
    }
    if(st.size()) return false;
    return true;
}

int main(){
    string s = "((())))";
    cout<<balanced(s);
}