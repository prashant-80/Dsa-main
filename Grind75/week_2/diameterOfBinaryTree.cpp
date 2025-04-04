//approach
// Use DFS to calculate height of subtrees and track the maximum diameter

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        calculateHeight(root, diameter);
        return diameter;
    }
    
private:
    int calculateHeight(TreeNode* node, int& diameter) {
        if (!node) return 0;
        
        int leftHeight = calculateHeight(node->left, diameter);
        int rightHeight = calculateHeight(node->right, diameter);
        
        // Update diameter if the path going through current node is longer
        diameter = max(diameter, leftHeight + rightHeight);
        
        // Return height of current subtree
        return max(leftHeight, rightHeight) + 1;
    }
};
