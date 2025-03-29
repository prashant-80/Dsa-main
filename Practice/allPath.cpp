#include<iostream>
#include<list>
using namespace std;
#include<unordered_set>

unordered_set<int> vis;
vector<list<int> > graph;
vector<vector<int> > result;
int v;

void addEdge(int src, int dest, bool bidir = true){
   graph[src].push_back(dest);
    if(bidir){
         graph[dest].push_back(src);
    }
}

void  dfs(int curr, int end, vector<int> &v){
    if(curr == end){
        v.push_back(curr);
        result.push_back(v);
        v.pop_back();
        return;
    }
    vis.insert(curr);
    v.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(!vis.count(neighbour)){
             dfs(neighbour, end,v);
        }
    }
    v.pop_back();
    return;
}

void allPath(int src, int dest){
    vector<int> v;
    dfs(src, dest,v);
}

int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        addEdge(s,d);
    }
    int src, dest;
    cin>>src>>dest;
    allPath(src, dest);
    return 0;
}