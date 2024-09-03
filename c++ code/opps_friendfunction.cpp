                                // FRIEND FUNCTION//

   
#include<iostream>
using namespace std;

class number
{
private:
int a ;
public:
void getdata(int x){
a=x;

}
friend int add(number N1,number N2);

};

int add(number N1,number N2){
    
     int sum=N1.a+N2.a;
    return sum;
}



int main(){
number N1,N2;

N1.getdata(10);
N2.getdata(30);
int sum=add(N1,N2);
cout<<"sum="<<sum;
return 0;
}