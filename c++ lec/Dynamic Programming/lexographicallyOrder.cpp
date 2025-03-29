//lexographicallyOrder of a array of integers
//use recursion to solve this problem
//generate all the possible subsequence of the array and then sort them and print them

#include<iostream>
using namespace std;

void f(int i, int n){
if(i>n) return;
if(i<=n && i!=0) cout<<i<<" ";
for(int j=(i==0)?1:0;j<=9;j++){
    f(10*i+j,n);
}
}



int main(){
    int n;
    cin >> n;
    f(0,n);
}