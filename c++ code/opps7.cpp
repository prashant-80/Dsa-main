#include<iostream>
using namespace std;

class fab
{
private:
int a,b,c;
public:
fab(){
    a=0;
    b=1;

}
void calculation(){
    cout<<"first 15 terms of the fabiscoini series is";
    cout<<a<<" "<<b<<" ";

for (int i = 2; i < 15; i++){

    c=a+b;
    cout<<c<<" ";
  a=b;
b=c;

    /* code */
}

}
};

int main(){
    fab f;
    f.calculation();
    return 0;
}