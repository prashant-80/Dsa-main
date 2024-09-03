#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cout << "Enter number  of elements";
    cin >> n;
    cout << "Enter Elements";
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> v2(v.size());

    for (int i = 0; i <= n - 1; i++) // i+j=
    {
        v2[i] = v[n - i - 1];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        cout << v2[i] << " ";
    }
}
