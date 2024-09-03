#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len=s.length();
    reverse(s.begin()+0,s.begin()+len/2);
    cout<<"Reversed string = "<<s;

}