#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no";
    cin>>n;
    bool flag=true;
    int i;

    for(i=2;i<n;i++)
    {
            if(n%i==0)
            {
                flag=false;
                break;
            }
    }
    if(n==1)
    cout<<"1 is neither prime nor composite";

    else if(flag==true)
    {
        cout<<"it is a prime no";
    }
    else{
        cout<<"composite";
    }


}