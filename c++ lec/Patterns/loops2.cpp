#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"enter the no";
    cin>>no;
    int i;
    for( i=2;i<no;i++)
    {
        if(no%i==0)
        break;
    }

    if(i==no)
    {
        cout<<"it is a prime number";
    }
    else cout<<"not a prime number";


    return 0;
}