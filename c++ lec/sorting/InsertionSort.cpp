//insertion sort 
//find min ele in every window and swap it with 1st element

#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;

    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);  
            j--;
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

}