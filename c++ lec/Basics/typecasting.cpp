#include <iostream>
using namespace std;

int main()
{

    char ch;
    int no;

    cout << "Enter the alphabet";
    cin >> ch;
    no = (int)ch;
    cout << "The position of the element is" << (no - 64);

    return 0;
}