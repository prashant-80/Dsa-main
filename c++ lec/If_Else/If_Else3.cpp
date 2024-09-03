#include <iostream>
using namespace std;

int main()
{
    // char ch;
    // cout<<"Enter the character:";
    // cin>>ch;
    // int n=(int)ch;
    // if((n>=65 && n<=90) || (n>=97 && n<=122))
    // {
    //  cout<<ch<<" is an alphabet";
    // }
    // else{
    //     cout<<ch<<" is  not an alphabet";
    // }

    // nested if else
    int a, b, c;
    cout << "Enter 3 numbers";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << "is greatest";
        }
        else
        {
            cout << c << "is greatest";
        }
    }

    else
    {
        if (b > c)
        {
            cout << b << " is greatest";
        }
        else
        {
            cout << c << " is greatest";
        }
    }
}