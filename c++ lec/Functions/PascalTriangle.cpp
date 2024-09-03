#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
       
       
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}