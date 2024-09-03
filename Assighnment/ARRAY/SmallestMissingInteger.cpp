#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter number of element";
    cin>>n;
    int  arr[n];
    cout<<"ENter elements";
    
    for(int  i=0;i<=n-1;i++)
    {
        cin>>arr[i];
 
    }
    for(int i=0;i<=n-1;i++)
    {
        if((arr[i]+1)!=arr[i+1])
        {
            cout<<"Smallest missing element="<<arr[i]+1;
            break;
        }
    }
}