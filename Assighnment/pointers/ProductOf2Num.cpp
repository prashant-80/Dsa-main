#include<iostream>
using namespace std;
void multi(int *p1,int *p2,int *p3)
{
    cout<<"Enter 1st number:";
    cin>>*p1;
    cout<<"Enter 2nd number:";
    cin>>*p2;
    *p3=(*p1)*(*p2);
    return;
 }
int main()
{

    int a,b,c;
    int *p1=&a;
    int *p2=&b;
    int *p3=&c;
    multi(p1,p2,p3);
    cout<<"Multiplication is="<<c;

}