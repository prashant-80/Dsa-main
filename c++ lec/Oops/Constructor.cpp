#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;

     Rectangle(){
        l=0;
        b=0;
     }

     Rectangle(int x,int y){
        l=x;
        b=y;
     }

     Rectangle(Rectangle& r){
        l=r.l;
        b=r.b;
     }

};