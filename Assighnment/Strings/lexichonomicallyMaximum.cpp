#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> str;
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        str.push_back(temp);
    }
   
    sort(str.begin(),str.end());
    string max=str[0];
    for(int i=0;i<str.size();i++){
        if(str[i]>max){
            max=str[i];
        }
    }

    cout<<max;


}