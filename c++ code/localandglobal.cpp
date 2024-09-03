// GLOBAL AND LOCAL VARIABLES


#include<iostream>
using namespace std;
    int a =15;               //global a 

int main(){
     cout<<"c++ is better than c";

    int a=2,b=4,c=3; 
    cout <<" the average of the numbers are "<<(a+b+c)/3;
int a =10;
cout<<"the global a is "<<::a<<"local a is "<<a;
        
    return 0;
}