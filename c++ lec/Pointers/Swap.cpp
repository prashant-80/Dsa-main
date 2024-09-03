#include<iostream>
using namespace std;
int main()
{
    int a=2;
    int* p1=&a;
    int b=2;
    int* p2=&b;
    int c=*p1+*p2;
    int* p3=&c;
    cout<<"Sum="<<*p3;
    }