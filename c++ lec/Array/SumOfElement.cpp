#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number  of element";
    cin>>n;
    int arr[n];
    cout<<"enter numbers"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int  sum=0;
    for(int i=0;i<=n-1;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum= "<<sum;
}