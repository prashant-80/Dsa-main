#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
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
        if(i%2!=0) {
            arr[i]*=2;
        }
        else {
            arr[i]+=10;

        }
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";

    }
}