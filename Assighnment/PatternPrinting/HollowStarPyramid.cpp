#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++)
    {
        int a=1;
        for(int j=1;j<=nsp;j++)
        {
            cout<<" ";
            a++;

        }
        if (i <= n - 1)
            nsp--;
        else
            nsp++;
        for(int k=1;k<=nst;k++)
        {
            if(k==1 || k==nst || i==n || a==n )
            cout<<"*";
            else cout<<" ";
            a++;
        }
        if(i<=n-1) nst+=2;
        else nst-=2;
        cout<<endl;
    }
}