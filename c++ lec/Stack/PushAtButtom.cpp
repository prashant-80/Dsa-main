//temp stack -> empty the og stack in temp  -> push element in  og stack -> empty the temp stack in og stack back

#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> st){

    stack<int> temp;
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

void pushAtButtom(stack<int> &st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());

        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<"After adding at bottom"<<endl;
    print(st);
}

void pushAtIdx(stack<int> &st, int idx, int val){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<"After adding at index"<<idx<<" :"<<endl;
    print(st);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    //pushAtButtom(st,70);
    pushAtIdx(st,2,70);
    

}