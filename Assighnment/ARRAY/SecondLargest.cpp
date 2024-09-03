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
    int max1,max2;
    max1=max2=INT_MIN;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
           
        }
        else if(arr[i]!=max1 && max2<arr[i])
        {
            arr[i]=max2;
        }
    
    }
    cout<<"swcond max="<<max2;

}