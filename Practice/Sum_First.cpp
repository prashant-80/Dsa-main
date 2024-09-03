#include<iostream>
using namespace std;
int main()
{
        int n,secondlast;
        cout<<"Enter 5 digit number";
        cin>>n;
        int a=n;
        a/=10;
        secondlast=a%10;
        while(n>9)
        {
            n/=10;
        }
      int firstdigit=n;
      cout<<"Sum of 1st adn 2nd last digit is= "<<firstdigit+secondlast;
}