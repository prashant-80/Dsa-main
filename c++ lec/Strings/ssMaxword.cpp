#include <iostream>
using namespace std;
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
int main()
{
    string s="he is a good boy of good mood";
    vector <string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp)
    {
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    int maxCount=1;
    int count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]==v[i]) count++;
        else count=1;
        if(maxCount<count)
        {
            maxCount=count;
        }
    }
count=1;
    for(int i=1;i<v.size();i++)
    {
        
        if(v[i-1]==v[i]) count++;
        else count=1;
        if(count==maxCount) 
        {
            cout<<v[i]<<" "<<maxCount;
        }
    }




}