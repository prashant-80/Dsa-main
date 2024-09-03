#include<iostream>
using namespace std;
int main(){
    int  fab,a,b,c,n;
    a=0;
    b=1;
    cout<<"Enter the number of elements in faboscii series";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++)
    {
        fab=a+b;
        cout<<fab<<" ";
        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}