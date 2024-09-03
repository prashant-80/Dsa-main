#include <iostream>
using namespace std;
int main()
{
    int n,lastdigit,sum=0;
    cout << "Enter the  no";
    cin >> n;
    int a=n;

    while (n != 0)
    {
      lastdigit=n%10;
      sum+=lastdigit;
      n/=10;
    }
    cout<<"The sum of the digit of " <<a<<" is:"<<sum;

    
}