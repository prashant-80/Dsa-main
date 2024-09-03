#include <iostream>
using namespace std;

class fac
{
private:
    int a, product;

public:
    void getdata()
    {
        cout << "enter the no ";
        cin >> a;
    }
    void calculation()
    {
        product = 1;
        for (int i = 1; i <= a; i++)
        {
            /* code */ product = product * i;
        }
    }
    void display()
    {
        cout << "the  factorial of the no is" << product;
    }
};

int main()
{
    fac f;
    f.getdata();
    f.calculation();
    f.display();
    return 0;
}