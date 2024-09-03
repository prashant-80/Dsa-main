#include<iostream>
#include<vector>
using namespace std;
bool  isIsomorphic(string s1,string s2){
    vector<int> freq1(128,-1);
    vector<int> freq2(128,-1);
    for(int i=0;i<s1.length();i++){

        if(freq1[s1[i]]!=freq2[s2[i]]) return false;
        else{
            freq1[s1[i]]=i;
        freq2[s2[i]]=i;

        }

    }
    return true;
}


int main(){
    string s1="egg";
    string s2="add";
    if(isIsomorphic(s1,s2)){
        cout<<"It is Isomorphic";
    }
    else{
        cout<<"Not Isomorphic";
    }

}