#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition of a Node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class Solution {
public:
    // Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) {
        vector<int> ans;
        if (root == NULL) return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if (curr == NULL) {
                ans.push_back(-1); // Use -1 as a marker for NULL
            } else {
                ans.push_back(curr->data);
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return ans;
    }

    // Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &arr) {
        if (arr.empty() || arr[0] == -1) return NULL;

        queue<Node*> q;
        Node* root = new Node(arr[0]);
        q.push(root);
        int i = 1;

        while (!q.empty() && i < arr.size()) {
            Node* temp = q.front();
            q.pop();

            // Left child
            if (arr[i] != -1) {
                temp->left = new Node(arr[i]);
                q.push(temp->left);
            }
            i++;

            // Right child
            if (i < arr.size() && arr[i] != -1) {
                temp->right = new Node(arr[i]);
                q.push(temp->right);
            }
            i++;
        }

        return root;
    }
};

int main(){
    Solution sol;
    
    // Constructing a sample binary tree:
    //         1
    //        / \
    //       2   3
    //          / \
    //         4   5
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    
    // Serialize the tree
    vector<int> serialized = sol.serialize(root);
    cout << "Serialized tree: ";
    for (int num : serialized) {
        cout << num << " ";
    }
    cout << endl;
    
    // Deserialize the vector back into a tree
    Node* deserializedRoot = sol.deSerialize(serialized);
    
    // Serialize again to verify
    vector<int> reSerialized = sol.serialize(deserializedRoot);
    cout << "Serialized deserialized tree: ";
    for (int num : reSerialized) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}