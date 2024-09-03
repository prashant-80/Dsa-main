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
    bool flag=false;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[i]==arr[j]) 
            {
                cout<<i<<endl;
                flag=true;
            }

        }
    }
    if(flag==true) cout<<"Dublicate is  present ";
    else cout<<"dublicate not  preseent  ";

}