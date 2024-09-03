#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s1="prashant";
    vector<int> freq(26,0);
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            s1[j]=i+'a';
            j++;
        }
    }

    cout<<"sorted string="<<s1;

}

