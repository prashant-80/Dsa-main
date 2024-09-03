//to solve a prb based on array and string 
//f(arr, idx ..)  idx = curr idx we are at

#include<iostream>
using namespace std;
void f(int *arr,int idx,int n){
    if(idx == n) return;

    cout<<arr[idx]<<" ";
    f(arr, idx+1 ,n);
}
int main(){
    int arr[]={1,8,7,4,3,2};
    int n=6;
    int idx=0;
    f(arr,idx,n);
}