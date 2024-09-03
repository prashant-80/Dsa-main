
// STARTING WITH FUNCTIONS


#include<iostream>
using namespace std;
 

 int sum(int a,int b);  //arguments

int main(){  
     int num1,num2;
    cout <<"enter the first no  number"<<endl;
    cin>>num1;
    cout<<"enter the second no"<<endl;
    cin>>num2; 
    cout<<"the sum  of the no is"<<  sum( num1,num2) <<endl ; 

 
return 0;

}

  int sum(int a ,int b )   //original arguments only get copied to temporary arguments
{
    int c;
    c=a+b;
    return c;
}