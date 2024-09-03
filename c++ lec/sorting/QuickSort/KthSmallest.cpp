#include<iostream>
using namespace std;

int partition(int  arr[],int first,int last){
    int  pivot=arr[last];
   int i=first-1;  //for inserting  element < pivot
   int j=first;    //for  finding element < pivot
   for(;j<last;j++){
    if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
    }
    
   } 
   //now i is pointing to the last element < pivot
   //correct position for pivot will  be
   swap(arr[i+1],arr[last]);
   return i+1;
}

int KthSmallest(int arr[],int first,int last,int k){

//base case
    int pi=partition(arr,first,last);
    if(pi+1 == k) return arr[pi];
     if(pi+1 > k)  return KthSmallest(arr,first,pi-1,k);  //recursive case 
    else return KthSmallest(arr,pi+1,last,k);
}

int main(){
    int arr[]={1,5,6,7,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int  k=3;
   
    cout<< KthSmallest(arr,0,n-1,k);
}