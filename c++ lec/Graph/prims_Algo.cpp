#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
#define ll long long int
#define pp pair<int, int>   
using namespace std;
#include<unordered_set>

vector<list<pair<int, int> > > graph;

void addEdge(int u,int v,int wt, bool bidir = true){
    graph[u].push_back({v,wt});
    if(bidir)
    graph[v].push_back({u,wt});
}


ll prims(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp> > pq;
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int, int> mp;
    pq.push({0,src});
    for(int i = 1; i <= n; i++){
    mp[i] = INT_MAX;
    }
    mp[src] = 0;
    int total_count = 0;
    ll ans = 0;
    while(total_count<n && !pq.empty()){
        pp curr  = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        ans += curr.first;
        total_count++;
        pq.pop();
        for(auto neighbour:graph[curr.second]){
            if(!vis.count(neighbour.first) and neighbour.second < mp[neighbour.first]){
                mp[neighbour.first] = neighbour.second;
                pq.push({neighbour.second, neighbour.first});
                par[neighbour.first] = curr.second;
            }
        }

    }
    return ans;
}


int main(){
int n,m;  // n = no of vertices, m = no of edges
cin>>n>>m;
graph.resize(n+1, list<pair<int, int> >());

while(m--){
    int u,v,wt;
    cin>>u>>v>>wt;
    addEdge(u,v,wt);
}


int src;
cin>>src;

cout<<prims(src, n)<<endl;

return 0;
}

