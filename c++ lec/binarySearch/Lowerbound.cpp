//the index at which the  arr[mid]>=x is called  lowerbound index
//time complexity=O(logn);
#include<iostream>
using namespace std;

int lowerbound(int  arr[],int n,int x){
    int low=0;
    int hi=n-1;
    int ans=n;
    while(low<=hi){
        int mid=(hi+low)/2;
        if(arr[mid]>=x) {
            ans=mid;
            hi=mid-1;
        }
        else{
                low=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int idx = lowerbound(arr, 8, target);
    if(idx==8) cout<<"entered no is the biggest";
    else cout<<"the lowerbound index is:"<<idx;
   
}