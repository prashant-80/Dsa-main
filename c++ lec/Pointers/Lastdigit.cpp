#include<iostream>
using namespace  std;
void cal(int n,int* p1,int* p2)
{
    *p2=n%10;    //last  digit
    while(n>9) //first digit can  be between 1  to 9
    {
        n/=10;
    }
    *p1=n;
    return;
}
int main()
{
int firstdigit,lastdigit,n;
int* ptr1 = &firstdigit;
int *ptr2= &lastdigit;
cout<<"Enter a number:";
cin>>n;
cal(n,ptr1,ptr2);
cout<<"FirstDigit="<<firstdigit<<"\nLastdigit="<<lastdigit;

}