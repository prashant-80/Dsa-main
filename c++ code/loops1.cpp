// ****************************// types of loop and problems based on them************
// 1) for  loop
#include <iostream>
using namespace std;
int main()
{
    cout << "good morning" << endl;

    int a;
    cout << "enter the number " << endl;
    cin >> a;
    cout << "the table of the given number is" << endl;
    for (int i = 1; i < 11; i++)
    {
        cout <<a <<" X "<<i <<"="<< a * i << endl;
    }
    return 0;
}
