#include<iostream>
using namespace std;
void f(int num,int k){
    if(k==0) return; //base case
    f(num,k-1); //assumption
    cout<<num*k<<endl; //self work
}
int main(){
    f(5,6);
}