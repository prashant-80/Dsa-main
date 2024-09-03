
// *****************STARTING WITH OBJECT ORIENTED PROGRAMMING*************************

// gcd of two no
// factorial  of no
// sum of integer of no
// reverse of any int  no

#include <iostream>

using namespace std;

class GCD
{
private:
   int a, b;

public:
   void getdata()
   {
      cout << "enter the no" << endl;
      cin >> a >> b;
   }
   void calculation()
   {
      while (a != b)
      {
         if (a > b)
            a = a - b;
         if (a < b)
            b = b - a;
      }
   }
   void display()
   {
      cout << "the gcd of two no is" << a << endl;
   }
};

int main()
{
   GCD g;
   g.getdata();
   g.calculation();
   g.display();

   return 0;
}
