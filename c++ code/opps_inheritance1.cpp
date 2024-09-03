                                        // INHERITANCE
// 1)SINGLE INHERITANCE
// 2)MULTIPLE 
// 3)HEIRARCHICAL
// 4)MULTIPLE LEVEL
// 5)HHYBRID
#include<iostream>
using namespace std;
 class number
 {
    protected:
    int a;
    public:
    void getdata(int x){
a=x;
    }
    void display(){
        cout<<"the no is"<<a;
    }
 };

 
 
 
 class square:public number
 {
private:
int sq;
public:

void getsquare(){
    sq=a*a;
cout<<"the  sq of the no is"<<sq;
}

 };

 class cube:public number
 {
    int cb;
    public:
    void getcube(){
        cb=a*a*a;
        cout<<"the cube of the given  no is"<<cb;
    }
 };

 int main(){
square s;
s.getdata(5);
s.display();
s.getsquare();

cube c;
c.getdata(6);
c.display();
c.getcube();



return 0;
 }