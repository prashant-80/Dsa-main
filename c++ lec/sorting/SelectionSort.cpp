#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,3,2,4,5};

    for(int i=0;i<4;i++)
    {
        int  min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<5;j++)
        {
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}