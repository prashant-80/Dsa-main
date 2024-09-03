#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

int n=124;
string s = to_string(n);
cout<<"number of digits ="<<s.length()<<endl;
cout<<"last digit="<<s[s.length()-1]<<endl;

}