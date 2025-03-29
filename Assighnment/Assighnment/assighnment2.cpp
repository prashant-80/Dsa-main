#include <iostream>
using namespace std;
int main()
{
    int amount, n2, n1, n5, n2000, n10, n50, n100, n500;
    amount = n2 = n1 = n5 = n2000 = n10 = n50 = n100 = n500 = 0;
    cout << "Enter the amount";
    cin >> amount;
    switch (amount >= 2000)
    {
    case 1:
        n2000 = amount / 2000;
        amount -= n2000 * 2000;
        break;
    }
    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount -= n500 * 500;
        break;
    }
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount -= n100 * 100;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount -= n50 * 50;
        break;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount -= n10 * 10;
        break;
    }

    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount -= n5 * 5;
        break;
    }
    switch (amount >= 2)
    {
    case 1:
        n2 = amount / 2;
        amount -= n2 * 2;
        break;
    }

    switch (amount >= 1)
    {
    case 1:
        n1 = amount;
        break;
    }

    cout << "no of 2000 notes =" << n2000 << endl;
    cout << "no  of 500 notes=" << n500 << endl;
    cout << "no of 100  notes=" << n100 << endl;
    cout << "no of 50 notes=" << n50 << endl;
    cout << "no  of 10 notes=" << n10 << endl;
    cout << "no of 5 notes=" << n5 << endl;
    cout << "no of 2 rupee coin=" << n2 << endl;
    cout << "no of 1  rupeee coin=" << n1 << endl;

    return 0;
}