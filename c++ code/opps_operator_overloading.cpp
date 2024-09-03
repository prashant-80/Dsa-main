// operator overloading 1)unary operator

#include<iostream>
using namespace std;

class number
{
private:
int a;
public:
void getdata(int x)
{
    a=x;
    cout<<"the vvalue of a is"<<a;
}

};

int main()
{
    return 0;
}