#include<iostream>
using namespace std;

void reverse(int *arr,int l,int r){
    if(l>r) return ;
   swap(arr[l],arr[r]);
   reverse(arr,l+1,r-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, 0, size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}