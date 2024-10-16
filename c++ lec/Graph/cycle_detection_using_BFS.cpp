#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
#include<queue>
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

bool bfs(int src){
   vector<int> parent(v,-1);
    unordered_set<int> visited;
   queue<int> qu;
    qu.push(src);
    visited.insert(src);
    while(!qu.empty()){
        int node  = qu.front();
        qu.pop();
        for(auto neighbour:graph[node]){
           if(visited.count(neighbour) && parent[node]!=neighbour){
               return true;
           }
           if(!visited.count(neighbour)){
               qu.push(neighbour);
               visited.insert(neighbour);
               parent[neighbour] = node;
           }
        }
    }

}

bool hasCycle(){
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(!visited.count(i)){
            if(bfs(i)){
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