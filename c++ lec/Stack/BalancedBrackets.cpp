#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    stack<int> st;
    for(int i =0;i<s.size();i++){
        if((s[i] == '(') || (s[i]=='[') ||  (s[i]=='{')) st.push(s[i]);
        else{
            if(st.empty()) return false;
            char c = st.top();
            st.pop();
            if((s[i]==')' && c == '(') or (s[i]=='}' && c == '{') or (s[i]==']' && c=='['));
            else return false;
        }
    } 
    if(st.empty()) return true;
     return false;
 
}

int main(){
    string s = "((()))";
    bool result = isBalanced(s);
    if(result) cout<<"String is Balanced";
    else cout<<"String is Unbalanced";

}

