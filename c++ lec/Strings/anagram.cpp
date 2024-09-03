#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//permutation of words 
bool isAnagram(string s,string s1){
    int size=s.length();
    vector<int> freq(26,0);
    for(int i=0;i<size;i++){
        int index=s[i]-'a';
        int index2=s1[i]-'a';

        freq[index]++;
        freq[index2]--;
    }

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int  main()
{
    string s="physicswallah";
    string s1="wallahphysics";
    // sort(s.begin(),s.end());  //sorting the string s
    // sort(s1.begin(),s1.end());

    // if(s1==s) cout<<true;
    // else cout<<false;

    //alternate approavh

     bool anagram=isAnagram(s,s1);
     if(anagram==true) cout<<"strings are  anagram";
     else cout<<"not anagram";
}