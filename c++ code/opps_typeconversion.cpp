// type connversion
// 1)int  to  object
// 2)object to  int
// 3)object  to object

#include<iostream>
using namespace std;

class  number
{
    private:
    int  a;
    public:
    
    void display(){
        cout<<a;
    }
    number(){}
    number(int x){
        a=x;

    }
};

int main(){
int n=10;
    number N1;
    N1=n;          //N1=number(n)-->dynamic initialization of constructor
    cout<<"the  value of N1 ";
    N1.display();
    return 0;
}