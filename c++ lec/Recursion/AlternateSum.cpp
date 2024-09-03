#include<iostream>
using namespace std;
int f(int n){
    if(n==0) return 0; //base case

    return f(n-1)+ (n%2==0? -n : n);
}
int main(){
    int result=f(5); //1-2+3-4+5
    cout<<result;
}