#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> &parent ,int a){
    if(parent[a]==a) return a;
    return parent[a] = find(parent, parent[a]);
}

bool Union(vector<int> &parent, vector<int> &rank, int a,int b){
    int p1 = find(parent,a);
    int p2 = find(parent,b);
    if(p1==p2) return true;
    if(rank[p1] >= rank[p2]){
        rank[p1]++;
        parent[p2] = p1;
    }else{
        rank[p2]++;
        parent[p1] = p2;
    }
    return false;
}



int main(){ 
    int n,m;
    cin>>n>>m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i] = i;
    }
    while(m--){
            int x,y;
            cin>>x>>y;
           bool  b =  Union(parent, rank, x,y);
           if(b) cout<<"cycle detected";
    }
    return 0;
}