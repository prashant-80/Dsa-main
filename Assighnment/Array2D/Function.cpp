#include<iostream>
using namespace std;
void display(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==3/2 || j==3/2 ) cout<<arr[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,m,idx;
    int arr[3][3];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    display(arr);
}