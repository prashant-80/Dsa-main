#include<iostream>
using namespace std;
int main()
{
// int n=3;
// for(int i=1;i<=n;i++)
// {
//     for(int j=0;j<=n;j++)
//     {
//         if(i+j>=4)
//         cout<<"*";
//         else
//         cout<<" ";
//     }
//     cout<<"\n";
// }
// int n=3;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         if(i<=j)
//         cout<<"*";
//         else
//         cout<<" ";
//     }
//     cout<<"\n";
// }
int n=3,c=4;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
       if(j==c||j<=c-1||j<=c+1)
       cout<<"*";
       else
       cout<<" ";
    }
    cout<<"\n";
}
    return 0;
}