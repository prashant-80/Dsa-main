#include<iostream>
using namespace std;
int main(){

    int ans,ch,a,b;    //declaration of variables     
    cout<<"press 1 to add"<<endl;
    cout<<"press 2 for subtract"<<endl;
    cout<<"press 3 for multiply"<<endl;
    cout<<"prss 4 for divide"<<endl;
    cout<<"choose kar ek (:"<<endl;

    cin>>ch;
    cout<<"enter the value";
    cin>>a>>b;


    switch (ch)
    {
    case 1:
    ans=a+b;
    cout<<"the addition is:"<<ans;
    break;

    case 2:
    ans=a-b;
    cout<<"the subtraction is:"<<ans;
    break;

    case 3:
    ans=a*b;
    cout<<"the multiplication is"<<ans;
    break;

    case 4:
    ans=a/b;
    cout<<"the devision is "<<ans;
    break;




        
    
    default:
    cout<<"sale sahi value dal na , andha hai kya ....option nhi dikhata...chu**ya";
        break;
    }



}