#include<iostream>
using namespace std;

int binarysearch(int arr[], int n,int target){
    int  low=0;
    int hi=n-1;
    int mid=-1;
    while(low<=hi){
        mid=(low+hi)/2;  //updating mid
        //mid=low+(hi-lo)/2;
        if(arr[mid]==target) return mid; //
        else if(target>arr[mid]) low=mid+1;  //updating low..shrinking search space as element is present on righ side 
        else hi=mid-1;    //shrinking right side of min as element is present on left side
    }
    return 0;

}
int main(){
 int arr[]={3,4,6,7,9,12,16,17};
 int target=5;
 int mid=binarysearch(arr,8,target);
 if(mid==0) cout<<"element is not present";
 else cout<<"element is  present at index:"<<mid;
}