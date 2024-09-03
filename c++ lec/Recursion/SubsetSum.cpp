#include<iostream>
#include<vector>
using namespace std;

void f(int *arr,int n,int idx,int sum,vector<int> &result){

    if(idx==n) {
        result.push_back(sum);
        return;
    }
    f(arr,n,idx+1,sum+arr[idx],result);
    f(arr,n,idx+1,sum,result);

}

int main(){
    int arr[]={2,4,5};
    vector<int>result;

    f(arr,3,0,0,result);

    for(int i=0;i<result.size();i++){

        cout<<result[i]<<" ";

    }
}