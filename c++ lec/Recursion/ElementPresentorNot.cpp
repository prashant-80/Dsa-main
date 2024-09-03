#include<iostream>
using namespace std;

bool f(int *arr,int n,int i,int x)
{
    if(i==n) return 0;
    return arr[i]==x || f(arr,n,i+1,x);
}
int main()
{
    int arr[]={10,20,30,40};
    bool isElement=f(arr,4,0,22);
    if(isElement==1) cout<<"Yes";
    else cout<<"No";
}