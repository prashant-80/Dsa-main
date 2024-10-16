#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <unordered_set>
using namespace std;

vector<list<int> > graph; //each vertex has a list of vertices connected to it
int v;  //no of vertices

void  addEdge(int a, int b, bool bidir = true){
    graph[a].push_back(b); //a is connected to b. a is the source and b is the destination
    if(bidir) graph[b].push_back(a);
}


void topo(){
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto neighour: graph[i]){
            indegree[neighour]++;
        }
    }

    queue<int> qu;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            qu.push(i);
            visited.insert(i);
        }
    }
     //the visited set is used to keep track of the nodes that have been visited and has indegree 0
    while(!qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour:graph[node]){
            if(not visited.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    qu.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }

}



int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v, list<int>());
    while(e--){
        int a,b; //a and b are connected
        cin>>a>>b;
        addEdge(a,b,false);
    }
    topo();
    return 0;
}
