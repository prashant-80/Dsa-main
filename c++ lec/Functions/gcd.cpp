#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int gcd;
    // for(int i=1;i<=min(a,b);i++)
    // {
    //         gcd=i;
    // }
    for(int i=min(a,b);i>=1;i--)
    {
        gcd=i;
        break;
    }
    return gcd;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"GCD="<<gcd(a,b);
}