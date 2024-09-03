#include<iostream>
using  namespace std;

int main(){
    int arr[]={2,3,1,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    int i=0;
    while(i<n){
        int currectIdx=arr[i]-1;
        if(i==currectIdx) i++;
        else swap(arr[i],arr[currectIdx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}