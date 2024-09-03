#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,0,1,1,1};
    int lo=0;
    int n=6;
    int hi=n-1;
    int count=0;
    int firstOccurence;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==1) {
            firstOccurence=mid;
            hi=mid-1;
        }
        else if(arr[mid]==0) lo=mid+1;
    }
    cout<<n-firstOccurence;

}