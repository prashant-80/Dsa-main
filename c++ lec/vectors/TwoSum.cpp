#include<iostream>
#include<vector>
using namespace std;
int  main()
{
    int n,target;
    vector <int> v;
    cout<<"Enter target";
    cin>>target;
    cout<<"Enter number  of elements";
    cin>>n;
    cout<<"Enter Elements";
    for(int i=0;i<=n-1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<=v.size()-2;i++)
    {
            for(int j=i+1;j<=v.size()-1;j++)
            {
                if(v[i]+v[j]==target)
                {
                    cout<<"("<<i<<","<<j<<")"<<endl;
                } 
            }
    }
}