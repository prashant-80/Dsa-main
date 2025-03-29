//easy 
//preorder root .. inorder left and right 
//left right index recursive
//recursive 

#include <vector>
#include<iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int value): val(value), left(nullptr), right(nullptr) {}
};

class Solution {
    public:

    int findIndex(int val, vector<int> &inorder, int left, int right){
        for(int i = left; i<=right;i++){
            if(inorder[i] == val) return i;
        }
        return -1;
    } // we can use hash map to store the index of the root
    //store i

      Node* build(vector<int>&inorder, vector<int>&preorder,int &preIndex, int left, int right){
          if(left > right ) return NULL;
          
          //creteing the node with preorder rray index
          Node * root = new Node(preorder[preIndex]);
          //finding the index of prorder[preIndex]
          int index = findIndex(preorder[preIndex], inorder, left ,  right);
           preIndex++;
          
          //creating left and right recursively
          root->left = build(inorder, preorder,preIndex, left, index-1);
          root->right = build(inorder, preorder,preIndex, index+1, right);
          return root;
      }
      
      
      
      // Function to build the tree from given inorder and preorder traversals
      Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
          int preIndex = 0;
          Node* root = build(inorder, preorder,preIndex, 0, preorder.size()-1);
          return root;
          
      }
  };

  //give input 

  int main(){
        // Example traversals for building the tree
        vector<int> inorder   = {4, 2, 5, 1, 6, 3, 7};
        vector<int> preorder  = {1, 2, 4, 5, 3, 6, 7};

        Solution sol;
        Node* root = sol.buildTree(inorder, preorder);

        cout << "Inorder traversal of constructed tree: ";
        cout << endl;
        return 0;
    }