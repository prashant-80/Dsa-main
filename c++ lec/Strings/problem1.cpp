#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//increase count if neighbouring characters are not same
int main()
{
    string s;
    cin>>s;
    int count =0;
    int i=0;
    while(s[i]!='\0')
    {
        if(s.length()==1) break;
        if(i==0)
        {
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==s.length()-1)
        {
            if(s[i]!=s[i-1]) count++;
        }
            else if (s[i]!=s[i-1] && s[i]!=s[i+1])
            {
                count++;
            }
            i++;
    }
    cout<<count;
}