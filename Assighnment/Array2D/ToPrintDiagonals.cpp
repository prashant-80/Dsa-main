#include<iostream>
using namespace std;


int main()
{
    
    int arr[3][3];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if( (i==j) || (i+j==2)) cout<<arr[i][j];
            else cout<<" ";

        }
        cout<<endl;
    }



}