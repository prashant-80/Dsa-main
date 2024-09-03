//function calling itself again and again
//solving larger problem by solving the smaller parts
//steps
//1)Base case
//2)Assumption
//3)Self work

#include<iostream>
using namespace std;
int f(int n){
   if(n==0) return 1;
    else return n*f(n-1);
    
}

int main(){
    int fac=f(5);
    cout<<fac;
}