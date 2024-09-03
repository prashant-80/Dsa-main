// Types of  connstructor
// 1)default connstructor
// 2)paramaterised constructor
// 3)overloaded constructor (multiple cinstructor)

#include<iostream>
using  namespace std;

class cnst
{
    private:
    int a,b,c;
    public:
           cnst(){}
           cnst(int x,int y)                //parameterised constructor
           {
                a=x;
                b=y;
                
                cout<<a+b<<endl;
           }
           cnst(int x,int y,int z)
           {
            a=x;
            b=y;
            c=z;
            cout<<"sum is"<<" "<<a+b+c<<endl;
           }
           
};
int main()

{
    cnst  c;
     c=cnst(10,15);         // DYNAMIC INITIALISATION OF CONSTRUCTOR ...RUNTIMR INITIALISATION
    cnst c2;
    cnst c3(20,30,40);
    return 0;
}


