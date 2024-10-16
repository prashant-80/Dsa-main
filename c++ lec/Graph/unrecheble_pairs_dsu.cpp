class Solution {
public:
    // Find the parent of the set a belongs to (with path compression)
    int find(vector<int> &parent, int a) {
        if(parent[a] == a) return a;
        return parent[a] = find(parent, parent[a]);
    }

    // Union by rank and size, combine two sets
    void Union(vector<int> &parent, vector<int> &rank, vector<int> &size, int a, int b) {
        int p1 = find(parent, a);
        int p2 = find(parent, b);
        if(p1 == p2) return; // already in the same component

        // Union by rank
        if(rank[p1] > rank[p2]) {
            parent[p2] = p1;
            size[p1] += size[p2]; // Update size of component
        } else if(rank[p1] < rank[p2]) {
            parent[p1] = p2;
            size[p2] += size[p1]; // Update size of component
        } else {
            parent[p2] = p1;
            size[p1] += size[p2]; // Update size of component
            rank[p1]++;
        }
    }

    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> parent(n), rank(n, 0), size(n, 1);

        // Initialize each node to be its own parent
        for(int i = 0; i < n; i++) {
            parent[i] = i;
        }

        // Apply union for each edge
        for(auto &edge : edges) {
            Union(parent, rank, size, edge[0], edge[1]);
        }

        // To count unconnected pairs, first gather the sizes of all components
        unordered_map<int, int> componentSize;
        for(int i = 0; i < n; i++) {
            int root = find(parent, i);
            componentSize[root] = size[root]; // size of the component for each unique root
        }

        // Calculate the total number of unconnected pairs
        long long totalPairs = 0;
        long long sum = 0;

        for(auto &comp : componentSize) {
            totalPairs += sum * comp.second; // Add product of nodes in previous components with current component
            sum += comp.second; // Accumulate the sizes
        }

        return totalPairs;
    }
};