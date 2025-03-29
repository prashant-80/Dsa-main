#include<iostream>
#include<vector>
using namespace std;

//used to sort 0 1 and 2 array

void display(vector<int>&v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}

int main()
{

vector<int> v;
v.push_back(1);
v.push_back(0);
v.push_back(2);
v.push_back(1);
v.push_back(1);
v.push_back(0);
int n=v.size();
int lo=0;
int mid=0;
int hi=n-1;

while(mid<=hi)
{
    if(v[mid]==2)
    {
        swap(v[mid],v[hi]);
        hi--;
    }
    else if(v[mid]==0)
    {
        swap(v[mid],v[lo]);
        lo++;
        mid++;
    }
    else if(v[mid]==1)
    {
        mid++;
    }


}
display(v);

}