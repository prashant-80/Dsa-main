#include<iostream>
using namespace std;
int main(){
    int nums[]={1,1,1,2,2,0,0,0,2};
    int noo=0;
    int noz=0;
    int notw=0;
    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
        if(nums[i]==0) noz++;
        else if(nums[i]==1) noo++;
        else if(nums[i]==2) notw++;
    }
    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
        if(i<noz) nums[i]=0;
        else if(i<noz+noo) nums[i]=1;
        else nums[i]=2;
    }
    
    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
        cout<<nums[i]<<" ";
    }
}