#include<iostream>     // Required for input/output operations
#include<vector>       // Required for using vector container
#include<queue>        // Required for using priority_queue
#include<unordered_map> // Required for unordered_map container
#include<list>         // Required for using list container
#define ll long long int  // Alias for long long int as 'll'
#define pp pair<int, int>  // Alias for pair of integers as 'pp'
using namespace std;
#include<unordered_set>  // Required for using unordered_set container


vector<list<pair<int, int> > > graph;  // Graph representation: Adjacency list where each vertex has a list of connected vertices with weights

// Function to add an edge between two vertices in the graph
void addEdge(int u, int v, int wt, bool bidir = true){
    graph[u].push_back({v, wt});  // Add edge from u to v with weight wt
    if(bidir)  // If the edge is bidirectional, also add edge from v to u
        graph[v].push_back({u, wt});
}

// Function implementing Dijkstra's algorithm to find the shortest path from src to all other nodes
unordered_map<int, int> dijstra(int src, int n){    
    priority_queue<pp, vector<pp>, greater<pp> > pq;  // Min-heap to prioritize nodes with the smallest distance
    unordered_set<int> vis;  // Set to keep track of visited nodes
    vector<int> via(n + 1);  // Stores the parent node (via) of each node
    unordered_map<int, int> mp;  // Maps each node to its shortest distance from the source

    pq.push({0, src});  // Push source node with distance 0 into the priority queue

    // Initialize the distance to all nodes as infinity (INT_MAX)
    for(int i = 0; i < n; i++){
        mp[i] = INT_MAX;
    }
    mp[src] = 0;  // Distance to the source node itself is 0

    // Main loop of Dijkstra's algorithm
    while(!pq.empty()){
        pp curr  = pq.top();  // Get the node with the smallest distance
        if(vis.count(curr.second)){  // If the node is already visited, skip it
            pq.pop();
            continue;
        }
        vis.insert(curr.second);  // Mark the node as visited
        pq.pop();  // Remove the node from the queue

        // Iterate over all neighbors of the current node
        for(auto neighbour : graph[curr.second]){
            // If the neighbor has not been visited and a shorter path to the neighbor is found
            if(!vis.count(neighbour.first) && mp[curr.second] + neighbour.second < mp[neighbour.first]){
                mp[neighbour.first] = mp[curr.second] + neighbour.second;  // Update the shortest distance to the neighbor
                pq.push({mp[curr.second] + neighbour.second, neighbour.first});  // Add the neighbor to the queue with the updated distance
                via[neighbour.first] = curr.second;  // Store the current node as the parent (via) of the neighbor
            }
        }
    }

    return mp;  // Return the map of shortest distances from the source
}

int main(){
    int n, m;  // n = number of vertices, m = number of edges
    cin >> n >> m;
    graph.resize(n + 1, list<pair<int, int> >());  // Resize the graph to fit 'n' vertices

    // Input all edges
    while(m--){
        int u, v, wt;
        cin >> u >> v >> wt;  // Input edge from u to v with weight wt
        addEdge(u, v, wt);  // Add the edge to the graph
    }

    int src;
    cin >> src;  // Input the source node for Dijkstra's algorithm

    // Get the shortest path from src to all other nodes
    unordered_map<int, int > sp = dijstra(src, n);
    
    int dest;
    cin >> dest;  // Input the destination node

    // Output the shortest distance from src to dest
    cout << sp[dest] << endl;
    
    return 0;
}