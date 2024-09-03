#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,3,4,5,5};
    int n=8;
    int target=3;
    int lo=0;
    int high=n-1;
    while(lo<=high){
        int mid=(lo+high)/2;
        if(arr[mid]==target) {
            if(arr[mid-1]==target) high=mid-1;
            else{
             cout<<mid;
             break;
             }
        }
        else if(arr[mid]<target) lo=mid+1;
        else high=mid-1;
    }

}