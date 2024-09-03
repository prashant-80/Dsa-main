#include<iostream>
using namespace std;
int display(int a[],int size)
{
    for(int i=0;i<=size-1;i++)   //array in functionis pass by reference
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int  change(int b[],int  size)
{
    b[0]=5;
}
int  main()
{
    int arr[]={2,3,4,5,6,7};
    int  size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);
}