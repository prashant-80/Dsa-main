#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    vector<int> m(v.size());

    int max = v[0];
    m[0] = -1;

    for (int i = 1; i < v.size(); i++)
    {
        m[i] = max;
        if (max < v[i])
            max = v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << m[i] << " ";
    }
}