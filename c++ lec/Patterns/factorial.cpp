#include <iostream>
using namespace std;
int main()
{
    int n,fac=1;        //already 1
    cout<<"Enter no";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fac*=i;
    }
    // if(n==0)
    // cout<<"1";
    // else
    cout<<"factorial= "<<fac;
}