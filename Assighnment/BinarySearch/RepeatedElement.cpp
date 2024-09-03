#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,5,6,7};
    int n=8;
    int lo=0;
    int hi=n-1;
    int ans;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==mid+1) lo=mid+1;
        else if(arr[mid]==mid)
        {
            if(arr[mid-1]==arr[mid]){
                ans=arr[mid];
                break;
            }
            else hi=mid-1;
        }

    }
    cout<<"Repeated Element is:"<<ans;
}