#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[] = {1,-2,3,-5,4,-1,3,6,-2,1};
    int n=10;  //size of array
    int k=3;
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        q.push(i);
    }
    int i=0;
    while(i<=n-k){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else  ans.push_back(arr[q.front()]);
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}