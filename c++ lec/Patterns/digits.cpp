#include <iostream>
using namespace std;
int main()
{
    int n,digit = 0;
    cout << "Enter the  no";

    cin >> n;
    int a=n;

    while (n != 0)
    {
        n /= 10;
        digit++;
    }

    if(a==0) cout<<"1";
    else
    cout << "no of digits is:" << digit;
}