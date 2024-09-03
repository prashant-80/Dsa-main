#include<iostream>
using namespace std;

int f(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];
    return max(arr[idx],f(arr,idx+1,n));   //calculatemax of remaining array

}
int main(){
    int arr[]={2,43,4,55,16,7};
    int n=6;
    int idx=0;
   int max= f(arr,idx,n);
   cout<<max;
}