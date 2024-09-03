#include<iostream>
using namespace std;
int f(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];
    return  arr[idx]+f(arr,idx+1,n);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int sum=f(arr,0,n);
    cout<<sum;
}