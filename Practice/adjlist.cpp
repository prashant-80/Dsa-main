#include<iostream>
#include<list>  
using namespace std;

vector<list<int> > graph;
int v;

void addEdge(int src, int dest, bool bidir = true){
   graph[src].push_back(dest);
    if(bidir){
         graph[dest].push_back(src);
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
    return 0;
}