#include <iostream>
using namespace std;
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>


class Solution {
public:
    vector<list<int> > graph; //each vertex has a list of vertices connected to it
    int v;  //no of vertices
    void  addEdge(int a, int b, bool bidir = true){
        graph[a].push_back(b); //a is connected to b. a is the source and b is the destination
        if(bidir) graph[b].push_back(a);
    }


    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        v = numCourses;
        graph.resize(v, list<int>());
        for(auto edge: prerequisites){
            addEdge(edge[1], edge[0]);
        }
        
    }

};