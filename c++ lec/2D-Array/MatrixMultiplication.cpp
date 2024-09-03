#include<iostream>
using namespace std;
//row no should equal to column no of 2nd matrix r1=c2
int main()
{
int  mat1[2][2];
int mat2[2][2];

    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>mat1[i][j];
        }

   }

   for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>mat2[i][j];
        }

   }
    int ans[2][2];
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        ans[i][j]=0;
        for(int k=0;k<2;k++)
        {
            ans[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }
   }


   for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
   }
}

