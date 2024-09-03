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

int permutation(int n, int r)
{
    int npr = fact(n) / fact(n-r);
    return npr;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r";
    cin >> n >> r;
    int ncr = combination(n, r);
    cout << "ncr is =" << ncr << endl;
    int npr = permutation(n, r);
    cout << "npr is =" << npr;
}