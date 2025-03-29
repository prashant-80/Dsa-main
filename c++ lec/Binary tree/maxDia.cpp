#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};


class Solution {
    public:
      int maxDia = 0;
      int level(Node* root){
          if(root == NULL) return 0;
          return 1 + max(level(root->left), level(root->right));
      }
      int diameter(Node* root) {  
         if(root == NULL ) return 0;
         int dia = level(root->left) + level(root->right);
         maxDia = max(dia, maxDia);
         diameter(root->left);
         diameter(root->right);
         return maxDia;
      }
  };