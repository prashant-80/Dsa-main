#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    
    for(int i=1;i<=2*n-1;i++)
    {
        cout<<(char)(i+64);
    }
    cout<<endl;
    int m=n-1;
    for(int i=1;i<=m;i++)
    {
        char ch='A';
        for(int j=1;j<=m-i+1;j++)
        {
            cout<<ch;
            ch++;
        }

        for(int k=1;k<=2*i-1;k++)
        {
            cout<<" ";
            ch++;

        }
        for(int j=1;j<=m-i+1;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

}