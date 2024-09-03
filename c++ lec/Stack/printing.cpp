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
        cout<<st.top()<<endl;
        temp.push(st.top());
        st.pop();
    }
    //values are reversed while copying in another stack
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }

}