#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    bool flag = true;
    float c = 12.3;

    cout << (a > b) << endl;
    cout << (a++) << endl;
    cout << (++a) << endl;
    cout << (a < b) << endl;
    cout << (a != b) << endl;
    cout << (a == b) << endl;
    cout << (b--) << endl;
    cout << (++b) << endl;
    cout << (a += b) << endl;

    return 0;
}