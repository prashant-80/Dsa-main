#include<iostream>
using namespace  std;
                                //leap year or not
int main()
{
int year;
cout<<"Enter the year";
cin>>year;
if((year%4==0) & (year%400==0 || year%100!=0))
{

    cout<<year<<" is a leap year";
}
else
{
    cout<<"Not a  leap year";
}
}