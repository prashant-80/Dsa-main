#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int arr1[2][2]={1,2,3,4}; //column is mandatory row is optional
    int  arr2[2][2]={3,4,5,2};
    
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr2[i][j]+=arr1[i][j];
        }
        cout<<endl;
    }

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}