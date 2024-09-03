#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int  arr[]={19,12,23,8,16};  
     vector<int> v(5,0);   //vector  to track is the  particular element is visited or not
    int x=0;
   int minidx;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    for(int i=0;i<5;i++){
        int  min=INT_MAX;
        for(int j=0;j<5;j++){
            if(v[j]==1) continue;
            else{
                if(arr[j]<min){
                    min=arr[j];
                     minidx=j;
                }
            }
        }
        
        arr[minidx]=x;
        v[minidx]=1;
        x++;

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}