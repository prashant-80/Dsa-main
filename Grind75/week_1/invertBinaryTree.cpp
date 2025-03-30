//just swapping the node on each root 
//and doing this for every node in the tree


class Solution {
    public:
        void helper(TreeNode* root){
            if(root == NULL) return;
    
            TreeNode* temp;
            temp = root->left;
            root->left = root->right;
            root->right = temp;
    
            helper(root->left);
            helper(root->right);
    
        }
    
        TreeNode* invertTree(TreeNode* root) {
            helper(root);
            return root;
        }
    };