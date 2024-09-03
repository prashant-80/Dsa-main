#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    int x;
    bool flag=false;
    
    cout<<"Enter the elements";
    for(int i=0;i<=3;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element ";
    cin>>x;
    for(int i=0;i<=3;i++)
    {
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"Element present";
    else cout<<"invalid entry";

}
