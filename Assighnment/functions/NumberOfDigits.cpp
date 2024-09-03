#include <iostream>
using namespace std;
int digit(int n)
{
    int digits = 0;
    while (n != 0)
    {
        digits++;
        n /= 10;
    }
    return digits;
}
int square(int x)
{
    return x * x;
}
int main()
{
    int n;
    cout << "Enter number";
    cin >> n;
    cout << "no of digit" << digit(n)<<endl;
    cout << "Square of numbers" << square(n)<<endl;
}