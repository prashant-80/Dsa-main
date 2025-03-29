#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}
void sort01(vector <int> &v)
{
    int noz=0;
    int noo=0;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++)
    {
        if(i<noz) v[i]=0;
        else v[i]=1;
    }

}


 void sort01m2(vector<int> &v)
{
    int i=0;
    int j=v.size()-1;
        while(i<j)
        {
            if(v[i]==0) i++;
            if(v[j]==1) j--;
            if(i<j){
            if(v[i]==1 && v[j]==0)
            {
                v[i]=0;
                v[j]=1;
            }
            }
        }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    sort01m2(v);
    display(v);
     

}