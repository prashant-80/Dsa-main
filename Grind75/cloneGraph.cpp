// Problem: Clone Graph
// URL: https://leetcode.com/problems/clone-graph/

//optimal approach
//1. Use DFS to traverse the graph
//2. Create a new node for each visited node
//3. Store the mapping of original nodes to cloned nodes in a vector
//4. For each neighbor of the original node, check if it has been visited
//5. If not, create a new node and add it to the mapping
//6. If it has been visited, add the corresponding cloned node to the neighbors of the cloned node
//7. Return the cloned graph
//8. Time complexity is O(V + E) and space complexity is O(V) for the visited vector

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
    public:
        vector<Node*> nodeRegister;
    
        void dfs(Node* node,Node* clone ){
            for(auto neighbor: node->neighbors){
                if(not nodeRegister[neighbor->val]){
                    Node* newNode = new Node(neighbor->val);
                    nodeRegister[newNode->val] = newNode;
                    clone->neighbors.push_back(newNode);
                    dfs(neighbor, newNode);
                }else{
                    clone->neighbors.push_back(nodeRegister[neighbor->val]);
                }
            }
        }
    
    
        Node* cloneGraph(Node* node) {
            if(node == NULL) return NULL;
            Node* clone  = new Node(node->val);
            nodeRegister.resize(105);
            nodeRegister[clone->val] = clone;
            dfs(node, clone);
            return clone;
        }
    };