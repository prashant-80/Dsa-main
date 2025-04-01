// Approach:
// Use DFS or BFS with a hashmap to keep track of cloned nodes
// Time Complexity: O(V+E) where V is the number of vertices and E is the number of edges
// Space Complexity: O(V) for the hashmap and recursion stack

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    unordered_map<Node*, Node*> visited; // Original node -> Clone node
    
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
        
        // If node was already processed, return its clone
        if (visited.find(node) != visited.end()) {
            return visited[node];
        }
        
        // Create clone with same value
        Node* clone = new Node(node->val);
        visited[node] = clone;
        
        // Clone all neighbors recursively
        for (Node* neighbor : node->neighbors) {
            clone->neighbors.push_back(cloneGraph(neighbor));
        }
        
        return clone;
    }
};
