
// PROBLEM  BASED ON FOR LOOP

#include <iostream>
using namespace std;

int main()
{
    cout << "good morning" << endl;

    // sum of the  first 15 number//

    // int sum = 0;
    // for (int i = 0; i <= 15; i++) // FOR(INTIALISATION;CONDITION;INCREMENT)
    // {
    //     sum = sum + i;
    // }
    // cout << "the sum of the first 15 natural   no is" << sum;

    // return 0;

    // checking no is prime or not//

    int no, c = 2;
    cout << "enter the number";
    cin >> no;

    for (int i = 2; i < no; i++)
    {
        if (no % i != 0)
        {
            c++;
        }
    }
    if (c == no)
        cout << "it is prime number";
    else
        cout << "not a prime number";
    return 0;
}
