#include <iostream>
using namespace std;

// class kar
// {
// private:
//   int a, b;

// public:
//   void getdata()
//   {
//     cout << "enter the 1st no"<<endl;
//     cin >> a;
//     cout << "enter the 2nd no"<<endl;
//     cin >> b;
//   }
//   void calculation()
//   {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//   }
//   void display()
//   {
//     cout << "the 1st no is " << a<<endl;
//     cout << "the 2nd no is " << b<<endl;
//   }
// };

// int main()
// {
//   kar p;
//   p.getdata();
//   p.calculation();
//   p.display();
//   return 0;
// }


// static member and data function


class num
{
private:
static int  a;
int b;
public:
void display(){

cout<<"the value of a is"<<a;
}




};

int num::a=0;
int main(){
  num n;
  n.display();
  return 0;
}