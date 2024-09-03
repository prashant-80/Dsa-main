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
    int max3=INT_MIN;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]>max1){
            max1=arr[i];
           
        }
    }
    for(int i=0;i<=n-1;i++){
         if(arr[i]!=max1 && max2<arr[i])
        {
            max2=arr[i];
        }
    }
     for(int i=0;i<=n-1;i++){   
         if(arr[i]!=max1 && arr[i]!=max2 && arr[i]>max3)
        {
            max3=arr[i];
        }
     }
    
    cout<<" max="<<max1<<endl;
    cout<<" max2="<<max2<<endl;
    cout<<" max3="<<max3<<endl;

}