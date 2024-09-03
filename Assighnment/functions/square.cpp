#include<iostream>
using namespace std;
void square(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i*i<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter no of element ";
    cin>>n;
    square(n);
}