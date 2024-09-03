#include<iostream>
#include<climits>
using namespace std;
int main()
{
    
    int n;
    int arr[n];
    
    cout<<"Enter number of elements";
    cin>>n;
    
    cout<<"Enter the  element  of the array";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target sum";
    cin>>target;
    int notrip=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target) notrip++;
            }
        }
    }
    cout<<"no of triplets="<<notrip;
}

