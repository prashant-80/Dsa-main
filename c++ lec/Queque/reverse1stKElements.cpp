#include<iostream>
using namespace std;
#include<queue>
#include<stack>

void display(queue<int> &q){
    for(int i=0;i<q.size();i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

void reverseKelements(queue<int>&q,int k){
    stack<int> st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;  //push pop front back empty size
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    int k=2;
    reverseKelements(q,k);
    display(q);

}