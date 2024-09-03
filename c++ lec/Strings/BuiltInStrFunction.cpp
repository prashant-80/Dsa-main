#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="prashant";
    //to print size
    cout<<s.size()<<" "<<s.length()<<endl;

    //pushback  and popback function
    s.push_back('s');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;

    // '+' operator
    string s2="singh";
    s=s+s2;
    cout<<s<<endl;

     //reverse
     //reverse(s.begin(),s.end());
    // cout<<s<<endl;
     reverse(s.begin()+8,s.end());   //reverse only  singh starting from 8th index
     cout<<s<<endl;

     //substring function
     cout<<s.substr(4); //starting fromm 4th index
     
     


}