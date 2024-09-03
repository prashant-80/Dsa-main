#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string s="My name is prashant";
    stringstream ss(s);
    string temp;
    while(ss>>temp)
    {
        cout<<temp<<endl;
    }


}