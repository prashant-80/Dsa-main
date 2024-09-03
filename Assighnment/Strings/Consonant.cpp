#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int consonent=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u') continue;
        
        else consonent++;
    }
    cout<<"No of consonent="<<consonent;
}
    

