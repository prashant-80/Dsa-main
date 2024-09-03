//Input a string and return the number of substrings that contain only vowels.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s="abjkoe";
    int vowels;
    string sub="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' || s[i]=='u' ){
            sub+=s[i];
        }
        else sub+=' ';
    }
    cout<<sub;
   int count=0;
    for(int i=0;i<sub.length();i++){
        
        if(sub[i]!=' ' && sub[i+1]==' '){
            count++;
        }
        
        else if(sub[i]!=' ' && sub[i+1]!=' ') {
            int j=i;
                while(sub[j]!=' ' && j!=sub.length()){
                        count++;
                        j++;
                }
                
        }
    }
    cout<<count;
}