#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string maxS;
    vector <string> s={"1234","234","0004567","234"};
    int max=stoi(s[0]);   //stoi--> String to integer
    for(int i=1;i<s.size();i++)
    {
        int x=stoi(s[i]);
        if(x>max) {
        max=x;
        maxS=s[i];
        }
        

    }
    cout<<"max element is  "<<maxS;


}
