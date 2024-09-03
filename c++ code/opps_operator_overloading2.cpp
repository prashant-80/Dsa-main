                                            // operator OVERLOADING
// 1)UNARY OPERATOR (increament operator(++))
// 2)BINARY OPERATOR(require 2 operand(+))
#include<iostream>
using namespace std;

class number{
private:
int a;
public:
void getdata(int x){
   a=x;
}
void  display(){
    cout<<a;
}

void operator++(){
    a++;
}

};

int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    cout<<"the value of n"<<n;
n++;
cout<<"the value on n after increment"<<n;

number  N1;
N1.getdata(15);
cout<<"the value on no";
N1.display();
++N1;  //N1.operator++()

cout<<"the value after  increment is";
N1.display();        
    return 0;
}
