#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<int> pq;  //by default max heap
priority_queue<int, vector<int>, greater<int> > pqm;  //by default max heap
pq.push(10);
pq.push(50);
pq.push(20);
pq.push(200);
pq.push(30);
pqm.push(1);
pqm.push(-1);
cout<<pq.top();
cout<<endl;
cout<<pqm.top();


}