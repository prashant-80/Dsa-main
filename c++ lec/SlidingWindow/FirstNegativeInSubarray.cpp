#include<iostream>
#include<vector>
using namespace std;
  int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=9;
    vector<int> ans;
    int k=3;
    int prevNegIdx=-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            prevNegIdx=i;
            ans.push_back(arr[prevNegIdx]);
            break;
        }  
    }

    int i=1;
    int j=k;
    while(j<n){
        if(prevNegIdx>=i) ans.push_back(arr[prevNegIdx]);
        else{
                for(prevNegIdx=i;prevNegIdx<j;prevNegIdx++){
                    if(arr[prevNegIdx]<0) break;
                }
                ans.push_back(arr[prevNegIdx]);
        }
        i++;
        j++;

    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
  }