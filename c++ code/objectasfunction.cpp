                 ////object as a function argument

#include <iostream>
using namespace std;
class number
{
private:
    int a;

public:
    void getdata(int n)                 
    {
        a=n;
              //N1.a=15
    }
    void display(number N1)    //create object to  copy another object
    {                                           //N1=N1
        cout << "number=" << N1.a;                   //N2.a
    }
};

int main()
{
    number N1,N2;

    N1.getdata(15);
                      //N1.a=N2.a
    N2.display(N1);

    return 0;
}