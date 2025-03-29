#include<iostream>
#include<list>
using namespace std;
#include<queue>
#include<unordered_set>

unordered_set<int> vis;
vector<list<int> > graph;
queue<int> qu;
int v;

void addEdge(int src, int dest, bool bidir = true){
   graph[src].push_back(dest);
    if(bidir){
         graph[dest].push_back(src);
    }
}

void bfs(vector<int> &ans){
    qu.push(0);
    while(!qu.empty()){
        int curr = qu.front();
        qu.pop();
        vis.insert(curr);
        ans.push_back(curr);
        for(auto neighbour:graph[curr]){
            if(!vis.count(neighbour)){
                qu.push(neighbour);
            }
        }
    }
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
    vector<int> ans;
    bfs(ans);

    return 0;
}