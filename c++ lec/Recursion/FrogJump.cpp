#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int f(int *h, int n, int i)
{
    if (i == n - 1)
        return 0;
    if (i == n - 2)
        return f(h, n, i + 1) + abs(h[i] - h[i + 1]);
    return min(f(h, n, i + 1) + abs(h[i] - h[i + 1]), f(h, n, i + 2) + abs(h[i] - h[i + 2]));
}

int main()
{
    int h[] = {10, 30, 40, 20};
    cout << f(h, 4, 0);
}