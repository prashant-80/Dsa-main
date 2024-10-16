#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> &parent ,int a){
    if(parent[a]==a) return a;
    return parent[a] = find(parent, parent[a]);
}

void Union(vector<int> &parent, vector<int> &rank, vector<int> &maximal,vector<int> &minimal, vector<int> &size,  int a,int b){
    int p1 = find(parent,a);
    int p2 = find(parent,b);
    if(p1==p2) return;
    if(rank[p1] >= rank[p2]){
        rank[p1]++;
        size[p1] += size[p2];
        parent[p2] = p1;
        maximal[p1] = max(maximal[p1],maximal[p1]);
        minimal[p1] = min(minimal[p1],minimal[p2]);
    }else{
        rank[p2]++;
        size[p2] += size[p1];
        parent[p1] = p2;
        maximal[p2] = max(maximal[p2],maximal[p1]);
        minimal[p2] = min(minimal[p2],minimal[p1]);   
    }
}



int main(){ 
    int n,m;
    cin>>n>>m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    vector<int> size(n+1,1);
    vector<int> maximal(n+1);
    vector<int> minimal(n+1);
    for(int i=0;i<=n;i++){
        parent[i] = maximal[i] = minimal[i] =  i;
    }

    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int x, y;
            cin>>x>>y;
            Union(parent, rank, maximal, minimal, size,  x, y);
        }else{
            int x;
            cin>>x;
            x = find(parent,x);
            cout<<minimal[x]<<" "<<maximal[x]<<" "<<size[x]<<endl;
        }
    }
    return 0;
}