#include<iostream>
#include<climits>
using namespace std;

int findMin(int nums[],int n) {
        
        int lo=0;
        int hi=n-1;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[lo]<=nums[mid]){
                ans=min(ans,nums[lo]);
                lo=mid+1;
            }
            else if(nums[mid]<=nums[hi]){
                ans=min(ans,nums[mid]);
                hi=mid-1;
            }
        }
        return ans;
    }

int  main()
{
int arr[]={7,8,9,1,2,3,4,5,6};
int min=findMin(arr,9);
cout<<min;
}