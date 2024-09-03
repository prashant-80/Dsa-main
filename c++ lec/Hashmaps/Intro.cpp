#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> directory; //stores in ascending order
    map<string,int,greater<string> > direc; //stores in decending order
    directory["prashant"] = 1234;
    directory["Naman"] = 3421;
    directory["Aman"] = 789;
    directory["priya"] = 9821;
   
    //printing the maps
    for(auto element:directory ){
        cout<<"Name-"<<element.first<<endl;
        cout<<"Phone-"<<element.second<<endl;
    }
    
}