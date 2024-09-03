//reverse of the number
// 2) while loop
#include<iostream>
using namespace std;

int main()
{
  /*
    int rev,no,rem;
cout<<"enter the 3 digit number ";
cin>>no;                //234
int mul=1000;
rev=0;
while(no>0)
{
    rem=no%10;           //rem=4                    //3
    rev=rev+(rem*mul);      //rev=0+(4*100)=400      //400+(3*10)=430
    no=no/10;               //23>0                      //2
    mul=mul/10;             //mul=10                    //1
}

cout<<"the rev of the given no is:"<<rev;
*/
                                    //factorial of entered number
int fac,no;
fac=1;
cout<<"Enter the number";
cin>>no;
for(int i=1;i<=no;i++)
{
    fac=fac*i;
}
cout<<"The factorial of "<<no<<" is  "<<fac;
    return 0;
}
