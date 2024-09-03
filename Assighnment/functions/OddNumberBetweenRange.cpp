#include<iostream>
using namespace std;
void odd(int a,int b)
{
    int temp;
    if(a>b) {
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0) cout<<i<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter range";
    cin>>a>>b;
    odd(a,b);
    


}