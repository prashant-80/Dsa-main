        // sum of the complex no using object as an function argument

#include <iostream>
using namespace std;
class complex
{
private:
    int real,img;

public:
void getdata()
{
    cin>>real>>img;
}
complex add(complex N2)
{
    complex N3;
    N3.real=real+N2.real;
    N3.img=img+N2.img;
    return N3;
    
} 
void display()
{
  cout<<real<<"+"<<img<<"i"<<endl;
}   
};

int main()
{
complex N1,N2,N3;
cout<<"enter the real and img part of commplex no:";
N1.getdata();
cout<<"enter the real and img part of commplex  no";
N2.getdata();
 N3=N1.add(N2);
cout<<"sum=";
N3.display();


    return 0;
}