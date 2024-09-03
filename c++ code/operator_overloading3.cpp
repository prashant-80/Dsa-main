// binary operator overloading

#include<iostream>
using namespace std;

class number{

    private:
    int a;
    public:
    void getdata(int x){
        a=x; 
    }
    void display(){
        cout<<a;
    }
     number operator+(number N2){
        number N3;
N3.a=a+N2.a;
return N3;
    }
};

int main(){
number N1,N2,N3;
N1.getdata(25);
N2.getdata(12);
N3=N1+N2;
cout<<"sum=";
N3.display();
return 0;

}
