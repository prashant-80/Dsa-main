#include <iostream>
using namespace std;

class complex
{
private:
int real,img;
public:
void getdata(int a,int b){
    real=a;
    img=b;
}

    void display()
    {

        cout<<real<<"+"<<img<<"i";

    }

    complex operator+(complex N2){
complex  N3;
        N3.real=N2.real+real;
        N3.img=N2.img+img;
        return N3;
    }



};

int main(){
    complex N1,N2,N3;
    N1.getdata(2,3);
    N2.getdata(4,1);
    N3=N1+N2;
    cout<<"the sum of the complex  no  is";
    N3.display();
    return 0;

    
}