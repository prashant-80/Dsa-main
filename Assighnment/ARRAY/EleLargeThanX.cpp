#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x;
    vector<int> v;
    cout<<"Enter number of element";
    cin>>n;
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Enter target";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>x) count++;
    }
    cout<<"count="<<count;
    

}