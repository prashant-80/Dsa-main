#include<iostream>
using  namespace std;
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

void removeAtEven(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            q.push(q.front()); 
        }
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
    removeAtEven(q);
    display(q);

}
