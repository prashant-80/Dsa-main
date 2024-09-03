#include<iostream>
using namespace std;
int f(int a,int b){
    if(a<b)  return f(b,a);
    if(b==0) return a;
    return f(b,a%b);
}

int main(){
    int result=f(40,48);
    cout<<result;
}