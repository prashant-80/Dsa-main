#include<iostream>
using namespace std;

class number1
{
    private:
    int a;
    public:
number1(){};
number1(int x){
a=x;
}
 int getnum(){

    return a;
}


};

class number2
{
    private:
    int a;
    public:
    number2(){};
number2(number1 N1)
{
    a=N1.getnum();
}
void display(){
    cout<<"the value of N2 is"<<a;
}


};

int main(){

    number1 N1(10);
    number2 N2;
    N2=N1;      // N2=number2(N1);
    
N2.display();
return 0;
}