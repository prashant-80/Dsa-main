// FRIEND FUNCTION PROGRAM

#include <iostream>
using namespace std;
class number2;
class number1
{
private:
    int a;

public:
    void getdata(int x)

    {
        a = x;
    }

    friend int add(number1 N1, number2 N2);
};
class number2
{
private:
    int a;

public:
    void getdata(int x)

    {
        a = x;
    }

    friend int add(number1 N1, number2 N2);
};
int add(number1 N1, number2 N2)
{
    int sum = N1.a + N2.a;
    return sum;
}

int main()
{

    number1 N1;
    number2 N2;
    N1.getdata(20);
    N2.getdata(30);
    int sum = add(N1, N2);
    cout << "sum=" << sum;
    return 0;
}