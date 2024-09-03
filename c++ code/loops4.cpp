#include<iostream>
using namespace std;
//prime numbers from 1-100
int main()
{
 int  n,c=2;
 for(n=3;n<100;n++)
 {
 c=2;
    for(int i=2;i<n;i++)
        {
            if(n%i!=0)
            c++;

         }
    if(c==n)
    {
        cout<<n<<"\n";
    }
 }
return 0;
}