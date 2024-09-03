#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }

    // *
    // ***
    // *****
    // ***
    // *
    cout << endl;
    int m = n - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    int nst = n - 2;
    int nsp1 = 3;
    int nst2 = n - 2;

    for (int i = 1; i <= m - 1; i++)
    {

        for (int i = 1; i <= nst; i++)
        {
            cout << "*";
        }
        nst++;

        for (int j = 1; j <= nsp1; j++)
        {
            cout << " ";
        }
        nsp1 -= 2;

        for (int k = 1; k <= nst2; k++)
        {
            cout << "*";
        }
        nst2++;
        cout << endl;
    }
}