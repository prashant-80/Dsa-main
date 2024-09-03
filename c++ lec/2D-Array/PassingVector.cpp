#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>> &v)
{
    v[0][0]=25;
}
int main()
{

vector<vector<int>> v;
vector<int> v1;
v1.push_back(2);
v1.push_back(3);
v1.push_back(4);
v1.push_back(5);

vector<int>v2;
v1.push_back(6);
v1.push_back(7);
v1.push_back(8);
v.push_back(v1);
v.push_back(v2);
cout<<v[0][0]<<endl;
change(v);
cout<<v[0][0];
}
