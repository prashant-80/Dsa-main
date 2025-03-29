#include <iostream>
using namespace std;
int main()

{
    char ch;
    cout << "Enter the character";
    cin >> ch;
    int n = (int)ch;
    if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
    {
        cout << ch << " is an alphabet";
    }
    else if (n >= 48 && n <= 57)
        cout << ch << " is a digit";

    else
        cout << ch << " is a special character";
}