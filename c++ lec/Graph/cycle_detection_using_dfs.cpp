#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;

int v;
void add_edge(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void display(){
   for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<",";
        }
        cout<<endl;
    }
}

bool dfs(int src, int parent, unordered_set<int> &visited){
    visited.insert(src);
    for(auto neighbour:graph[src]){
        if(visited.count(neighbour) && neighbour!=parent){
            return true;
        }
        if(!visited.count(neighbour)){
           bool res  =  dfs(neighbour,src,visited);
           if(res) return true;
        }
    }
    return false;
}

bool hasCycle(){
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(!visited.count(i)){
            if(dfs(i,-1,visited)){
                return true;
            }
        }
    }
    return false;
}


int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    display();
    bool b = hasCycle();
    if(b) cout<<"cycle detected";
    else cout<<"no cycle";
    return 0;
}