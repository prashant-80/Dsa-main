#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) { }
};

class Solution {
public:
    Node* prev;
    Node* first;
    Node* last;
    
    void inorder(Node* root) {
        if(root == nullptr) return;
        
        inorder(root->left);
        
        if(prev != nullptr && root->data < prev->data) {
            if(first == nullptr) {
                first = prev;
                last = root;
            } else {
                last = root;
            }
        }
        prev = root;
        
        inorder(root->right);
    }
    
    // Function to correct the BST by swapping the mistaken nodes
    void correctBST(Node* root) {
        first = last = nullptr;
        // Initialize prev with smallest integer so first comparison works correctly.
        prev = new Node(INT_MIN);
        inorder(root);
        if(first && last) {
            swap(first->data, last->data);
        }
    }
};

// Helper function to print the in-order traversal of the tree.
void inorderPrint(Node* root) {
    if(root == nullptr)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main() {
    /*
         Constructing a BST with two swapped nodes.
         The correct BST should be:
                   6
                 /   \
                2     10
               / \
              1   3
         But currently, the following tree has 10 and 2 swapped:
                   6
                 /   \
               10     2
              /  \
             1    3
    */
    
    Node* root = new Node(6);
    root->left = new Node(10);
    root->right = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    
    cout << "Inorder Traversal of the original tree:\n";
    inorderPrint(root);
    cout << "\n";
    
    Solution sol;
    sol.correctBST(root);
    
    cout << "Inorder Traversal of the corrected BST:\n";
    inorderPrint(root);
    cout << "\n";
    
    return 0;
}

