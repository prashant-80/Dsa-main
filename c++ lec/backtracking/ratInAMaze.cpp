#include<iostream>
#include<vector>
using namespace std;

int ans  = 0;

bool canWeGo(int n,int i, int j, vector<vector<int> > &grid){
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==0;
}

void  f(vector<vector<int> > &grid,int n,int i,int j){
    if(i == n-1 && j==n-1) {
        ans+=1;
        return; //base case
    }

    grid[i][j] = 2; //2 means visited

    //left
    if(canWeGo(n,i,j-1,grid)){
            f(grid,n,i,j-1);
    }

    //right
    if(canWeGo(n,i,j+1,grid)){
            f(grid,n,i,j+1);

    }
    //up
    if(canWeGo(n,i-1,j,grid)){
         f(grid,n,i-1,j);
    }

    //down
    if(canWeGo(n,i+1,j,grid)){
         f(grid,n,i+1,j);
    }

    grid[i][j] = 0; 

}
int  ratInAMaze(vector<vector<int> > &grid,int n){
    ans=0;
    f(grid,n,0,0);
    return ans;
}
int main(){
    vector<vector<int> >grid;
    vector<int> r1;
    r1.push_back(0);
    r1.push_back(1);
    vector<int> r2;
    r1.push_back(0);
    r1.push_back(0);
    grid.push_back(r1);
    grid.push_back(r2);
    cout<<ratInAMaze(grid,2);

    return 0;
}