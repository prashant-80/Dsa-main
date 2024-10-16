//A stone can be removed if it shares either the same row or the same column as another stone that has not been removed.
#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<unordered_set>

vector<list<int> > graph;
int v; // no of vertices


void dfs(int node, unordered_set<int> &visited) {
    visited.insert(node);
    for(auto neighbor : graph[node]) {
        if(not visited.count(neighbor)) {
            dfs(neighbor, visited);
        }
    }
}

int connected_components() {
    int result = 0;
    unordered_set<int> visited;
    for(int i = 0; i < v; i++) { //O(v)
        // go to every vertex
        // if from a vertex we can initialse a dfs, we got one more cc
        if(visited.count(i) == 0) {
            result++;
            dfs(i, visited); //total O(v+E)
        }
    }
    return result;
}


int main(){

}