#include<iostream>
using namespace std;
int main()
{
    int n,m,idx;
    int arr[2][2];
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }


        int max=arr[0][0];

    for(int i=0;i<2;i++)
    {
        int sum=0;
        for(int j=0;j<2;j++)
        {
            sum+=arr[i][j];
            if(sum>max) 
            {
                max=sum;
                 idx=i;
            }

        }
    }
    cout<<"The row with greatest sum is "<<idx+1;
}