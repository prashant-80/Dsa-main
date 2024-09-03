#include <iostream>
using namespace std;
int main()
{
    // int n=4;
    // n%2==0? cout<<"Evenn" : cout<<"odd";

    //     return 0;

    // int marks;
    // cout<<"Enter marks";
    // cin>>marks;
    // marks>33? cout<<"pass" : cout<<"fail";

    // char x;
    // int a=2;
    // x=(a>0)? 'a':'s';
    // cout<<x;

    // monthDaysByNumber
    int n;
    cout << "Enter month number";
    cin >> n;

    switch (n <= 7 && n % 2 != 0)
    {
    case 1:
        cout << "31";
    }

    switch (n >= 8 && n % 2 == 0)
    {
    case 1:
        cout << "31";
    }
    switch (n == 4 || n == 6 || n == 9 || n == 11)
    {
    case 1:
        cout << "30";
    }
    switch (n)
    {
    case 2:
        cout << "28";
    }
}