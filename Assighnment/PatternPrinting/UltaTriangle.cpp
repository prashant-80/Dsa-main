#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    int m = n - 1;
    int nsp = n + 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp; k += 1)
        {
            cout << " ";
        }
        nsp -= 2;
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << " ";
        }
        for (int q = 1; q <= m - i + 1; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
}