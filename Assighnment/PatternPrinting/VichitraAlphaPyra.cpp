#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int bee='B';
        char ch=(char)(i+64);
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<ch;
            ch--;
        }
        for(int  q=1;q<=i-1;q++)
        {
            cout<<(char)bee;
            bee++;
        }
        cout<<endl;
    }
}