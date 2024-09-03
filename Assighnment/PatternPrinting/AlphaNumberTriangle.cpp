#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    char a = '1';
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            a = '1';
        else
            a = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}