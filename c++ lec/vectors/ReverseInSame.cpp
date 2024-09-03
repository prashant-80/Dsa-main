#include<iostream>
#include<vector>
using namespace std;
int  main()
{
    int n,target;
    vector <int> v;
    cout<<"Enter number  of elements";
    cin>>n;
    cout<<"Enter Elements";
    for(int i=0;i<=n-1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
        int  temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<v[i]<<" ";
    }

}
