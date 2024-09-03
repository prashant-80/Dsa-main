#include<iostream>
using  namespace std;

class number
{
private:int a;
public:

void getdata(int x){


    a=x;
}
operator  int(){
    return a;
}


};


int main(){
    int  n;
number  N1;
N1.getdata(25);
n=N1;
cout<<"the value of  n is"<<n;
return 0;



}