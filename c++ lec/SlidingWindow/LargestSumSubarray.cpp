#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int  main(){
        int arr[]={7,1,2,5,8,4,9,3,6};
        int n=9;
        int k=3;
        int sum=0;
        int maxSum=INT_MIN;
        int idx=-1;

        for(int i=0;i<k;i++){
                sum+=arr[i];
        }
        maxSum=sum;
        int i=1,j=k;
       while(j<n){
        sum+=arr[j]-arr[i-1];
        if(sum>maxSum){
                maxSum=sum;
                idx=i;
        }
        i++;
        j++;
       }
        cout<<maxSum<<endl;
        cout<<idx;

}