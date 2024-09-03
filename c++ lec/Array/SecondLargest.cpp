#include<iostream>
#include<climits>
using namespace std;
  int main()
  {
    int n;
    cout<<"Enter number of element";
    cin>>n;
    int arr[n];
    cout<<"Enter the  elements";
    

    for(int i=0;i<=n-1;i++)

    {
        cin>>arr[i];
    }
    int  max=INT_MIN;
    int secondmax=INT_MIN;
    for(int i=0;i<=n-1;i++)
    {
        if(max<arr[i]) max=arr[i];  //max element 
    }
    
    for(int i=0;i<n;i++){
      if(arr[i]!=max && arr[i]>secondmax) secondmax = arr[i];
    }

    
    cout<<"MAX="<<max<<endl<<"secondmax="<<secondmax;

  }