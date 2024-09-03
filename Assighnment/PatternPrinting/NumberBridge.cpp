#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;

    int a=1;
    for(int i=1;i<=2*n-1;i++)
    {
        
        if(i>n-1){ 
            
        cout<<a;
        a--;}
        else {cout<<a;
        a++;}
        
    }
    cout<<endl;
    int m=n-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m-i+1;j++)
        {
            cout<<j;
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<" ";
        }
        int b=n-i;
        for(int j=1;j<=m-i+1;j++)
        {
            cout<<b;
            b--;
// 3 2 1
// 2 1
// 1
        }
        cout<<endl;

    }
    
}