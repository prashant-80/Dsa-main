#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //stack in reversed
    //values are reversed while copying in another stack
    while(temp.size()>0){    //while copying back print the values of temp stack 
        cout<<temp.top()<<endl; 
        st.push(temp.top());
        temp.pop();
    }

}