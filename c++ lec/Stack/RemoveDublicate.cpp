#include<iostream>
#include<stack>
#include<algorithm>
#include<climits>
using namespace std;

string RemoveDublicate(string s){
    stack <char> st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]==st.top());
        else st.push(s[i]);
    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;

}

int main(){
    string s = "aaabbbcccddffee";
    string result = RemoveDublicate(s);
    cout<<result;
}