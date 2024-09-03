#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,sumeven,sumodd;
    sumeven=sumodd=0;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the  element  of the array";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0) sumeven+=arr[i];
        else sumodd+=arr[i];
    }
    cout<<"Difference="<<sumeven-sumodd;
}