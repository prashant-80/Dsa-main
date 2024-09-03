#include<iostream>
using namespace std;
int main()
{
    int arr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }

   }
        int t[2][2]={0,0,0,0};
   for(int i=0;i<2;i++)
   {
    
    for(int j=0;j<2;j++)
    {
        t[j][i]=arr[i][j];
    }
   }

   for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
   }
}