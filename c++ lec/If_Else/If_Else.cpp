#include <iostream>
using namespace std;
int main()
{
    int no;
    cout << "Enter number";
    cin >> no;
    // if (no%2==0)
    // {
    //     cout<<"no  is even";
    // }
    // else
    // cout<<"no  is odd";

    // cout<<(no%2==0);

    if (no % 5 == 0)
    {
        cout << "divisible by 5";
    }
    else
    {
        cout << "NOt divisible by 5";
    }
}