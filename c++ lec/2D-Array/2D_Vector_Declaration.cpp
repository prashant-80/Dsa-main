#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<vector<int> > v(3,vector<int> (4,2));//size of roow,(column in each row,value in each column)

        for(int i=0;i<3;i++)
        {
                for(int j=0;j<4;j++)
                {
                        cout<<v[i][j]<<" ";
                }
                cout<<endl;
        }

        cout<<"number of rows="<<v.size()<<endl;  //number  of  rows
        cout<<"number of  column="<<v[1].size();  //number of columns
} 