#include<iostream>
using namespace std;
int area(int r)
{
    int area=3.14*r*r;
    return area;
}

int main()
{
    int r;
    cout<<"radius?";
    cin>>r;
    cout<<"Area of the circle is "<<area(r);
}