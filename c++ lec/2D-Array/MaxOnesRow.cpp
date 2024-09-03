#include<iostream>
#include<vector>
using namespace std;

int maxOnes(vector<vector<int>> &V)
{
    int maxOnesrow=-1;
    int maxOnes=0;
    int column=V[0].size();
    for(int i=0;i<V.size();i++)
    {
        for(int j=0;j<V[0].size();j++)
        {

            if(V[i][j]==1)
            {
                int noOfOnes=column-j;
                if(noOfOnes>maxOnes)
                {
                    maxOnes=noOfOnes;
                    maxOnesrow=i;

                }

            }
        }
    }
    return maxOnesrow;
}
int main()
{

    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    } 

    int res=maxOnes(v);
    cout<<res;
}