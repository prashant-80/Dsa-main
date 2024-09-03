//Strings are character array
//last element is \0
//sstrinfs are mutable in c++
//to take input with spaces use getline(cin,stringname)

#include<iostream>
#include<string>
using namespace std;
int main()
{
//     int n=5;
// char str[n];
// cout<<"Enter the  n characters";
// for(int i=0;i<n;i++)
// {
//     cin>>str[i];
// }
// int vowels=0;
// for(int i=0;i<n;i++)
// {
//     if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'  )
//     vowels++;
// }
// cout<<"No of vowels in the strings are "<<vowels;

string s="Prashant";
int count =0;
int i=0;
while(s[i]!='\0')   //last  element in string  is \0
{
        
    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'  )
    count++;
    i++;
}
cout<<"No of vowels in the strings are "<<count;


}