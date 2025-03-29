//bellman algorithms is used to find the shortest path negative weighted graph
//if the graph contains negative weight cycle then it will return 1 else 0
//negative weight cycle means if we start from a node and keep on traversing the graph then we will get the negative weight cycle
//bellman fails in case of negative weight cycle
#include<iostream>
using namespace std;
#include<vector>

int isNegativeWeightCycle(int n, vector<vector<int>> edges) {
    vector<int> dist(n, INT_MAX);

    // Step 1: Loop through all nodes to handle the graph being disconnected.
    for (int i = 0; i < n; i++) {
        dist[i] = 0;  // Treat each node as a possible starting point

        // Step 2: Relax all edges n-1 times
        for (int j = 0; j < n - 1; j++) {
            for (auto edge : edges) {
                int src = edge[0];
                int dest = edge[1];
                int wt = edge[2];

                if (dist[src] != INT_MAX) {
                    dist[dest] = min(dist[dest], dist[src] + wt);
                }
            }
        }

        // Step 3: Check for negative weight cycles by trying to relax one more time
        for (auto edge : edges) {
            int src = edge[0];
            int dest = edge[1];
            int wt = edge[2];

            if (dist[src] != INT_MAX && dist[src] + wt < dist[dest]) {
                return 1;  // Negative weight cycle found
            }
        }

        // Reset distances for the next node
        fill(dist.begin(), dist.end(), INT_MAX);
    }

    return 0;  // No negative weight cycle found
}