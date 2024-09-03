#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "Enter sides of the triangle";
    cin >> a >> b >> c;

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
        cout << a << b << c << "are the sides of  the triangle";

    else
        cout << "not the sides of the triangle";
}