#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(4);
    s1.insert(5);
    s1.insert(3);

    for(auto value: s1){
       cout<<value<<" ";
    }


}