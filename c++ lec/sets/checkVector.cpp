//find sum of elements which are common to both the vectors
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(2);
    set<int> myset ;
    for(int i=0;i<v1.size();i++){
        myset.insert(v1[i]);
    }
    int ans = 0;
    for(int i=0;i<v2.size();i++){
        if(myset.find(v2[i]) != myset.end()){
            ans+=v2[i];
        }
    }
    cout<<ans;

}