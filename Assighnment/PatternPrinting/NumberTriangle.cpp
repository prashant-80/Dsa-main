#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}