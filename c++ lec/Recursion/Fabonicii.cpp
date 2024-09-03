//base case
//assumption = assume that f(n-1) and f(n-2 ) give the fibonacii
//self work = sum the f(n-1) and f(n-2)

#include<iostream>
using namespace std;

int f(int n){

    if(n==0 || n==1) return n;
    return f(n-1) + f(n-2);
}

int main(){
    for(int i=0;i<=7;i++){
   int fab=f(i);
    cout<<fab<<"  ";
    }
    
}