#include <iostream>
using namespace std;
int main()
{
    int n,lastdigit=0,rev=0;
    cout << "Enter the  no";
    cin >> n;
    while(n!=0)
    {
        lastdigit=n%10;
        rev*=10;
        rev+=lastdigit;
        n/=10;
    }
   
    cout<<"REV= "<<rev;

    
}