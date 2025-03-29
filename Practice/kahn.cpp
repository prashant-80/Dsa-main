#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
#include<list>
using namespace std;


vector<vector<int>> graph;
int v;

void add_edge(int x, int y, bool bidir  = false){
    graph[x].push_back(y);
    if(bidir){
        graph[y].push_back(x);
    }
}

void topoSort(){
    //calculate indegree;
    vector<int> indegree(v, 0);
    for(int i=0;i< v;i++){   //v is no of virtices
        for(auto neighbour: graph[i]){
            indegree[neighbour]++;
        }
    }

    queue<int> qu;
    unordered_set<int> vis;

    for(int i = 0;i< v;i++){
        if(indegree[i] == 0){
            qu.push(i);
            vis.insert(i);
        }
    }
    //start multisource bfs

    while(!qu.empty()){
        int front = qu.front();
        qu.pop();
        //go to neighbout of this node and make their indgree -1;
        for(auto neighbour:graph[front]){
            if(!vis.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    qu.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }


}

int main(){
    graph.resize(v, vector<int>());
    int e;
    cin>>e;
    while(e--){
        int x, y;
        cin>>x>>y;
        add_edge(x, y);
    }

    topoSort();
}