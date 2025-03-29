#include <iostream>
using namespace std;

// top-down approach
vector<int> dp(1000005, -1);
vector<int> h;
int k = 5;
int f(int i)
{
    if (i == h.size())
        return INT_MAX;
    if (i == h.size() - 1)
        return 0;
    int ans = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (i + j >= h.size())
            break;
        ans = min(ans, abs(h[i] - (h[i + j])) + f(i + j));
    }
    return dp[i] = ans;
}

// bottom-up approach
int fbu(int n)
{
    dp[n - 1] = 0;
    for (int i = n - 2; i > 0; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            dp[i] = min(dp[i], abs(h[i] - h[i + j]) + dp[i + j]);
        }
    }
    return dp[0];
}

int main()
{
    int n = 5;
    h.resize(n);
    cout << f(0);
}