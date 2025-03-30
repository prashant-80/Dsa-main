// Leetcode 110. Balanced Binary Tree
// Approach
// We can use a recursive function to check if the tree is balanced.
// A tree is balanced if the height of the left and right subtrees differ by at most 1.

class Solution {
    public:
        int levels(TreeNode* root){
            if(root==NULL) return 0;
            return 1+ max(levels(root->left), levels(root->right));
        }
    
        bool isBalanced(TreeNode* root) {
            if(root == NULL) return true;
    
            int lst = levels(root->left);
            int rst = levels(root->right);
    
            if(abs(lst- rst)>1 ) return false;
    
            return isBalanced(root->left) && isBalanced(root->right);    //doinfg the same for left and right subtree
        }
    };