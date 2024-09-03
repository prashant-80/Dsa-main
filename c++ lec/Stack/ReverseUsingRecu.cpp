//Reversing a stack using recursion

#include<iostream>
#include<stack>
using namespace std;
 
void printRecursive(stack<int> &st){  //Displaying funcetion using recursion
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    printRecursive(st);
    cout<<x<<" ";
    st.push(x);
}

void pushAtButtom(stack<int> &st,int val){ ///pushing an element at bottom using recursion
     if(st.size()==0) {
        st.push(val);
        return;
     }
    int x = st.top();
    st.pop();
    pushAtButtom(st,val);
    st.push(x);
}


void reverseStack(stack<int> &st){  //reversing a stack using reursion
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    pushAtButtom(st,x);

}


int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //printRecursive(st);
    reverseStack(st);
    printRecursive(st);


}