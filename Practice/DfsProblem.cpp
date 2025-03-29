#include<iostream>
#include<list>
using namespace std;
#include<unordered_set>

unordered_set<int> vis;
vector<list<int> > graph;
int v;

void addEdge(int src, int dest, bool bidir = true){
   graph[src].push_back(dest);
    if(bidir){
         graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end){
    if(curr == end){
        return true;
    }
    vis.insert(curr);
    for(auto neighbour:graph[curr]){
        if(!vis.count(neighbour)){
            bool result  = dfs(neighbour, end);
            if(result){
                return true;
            }
        }
    }
    return false;
}

bool anyPath(int src, int dest){
    return dfs(src, dest);
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
    cout<<anyPath(src, dest);
    return 0;
}