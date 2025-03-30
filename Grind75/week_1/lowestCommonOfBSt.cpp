//approach:
//we check where the p and q are located in the tree.
//if both are on the left side of the root then we go to the left side of the root
//if both are on the right side of the root then we go to the right side of the root
//if one is on the left side and the other is on the right side then we return the root
//this is the point where the two nodes diverge and hence this is the lowest common ancestor
// Time complexity: O(h) where h is the height of the tree
// Space complexity: O(1) as we are not using any extra space


class Solution {
    public:
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            if(root->val > p->val && root->val>q->val) return lowestCommonAncestor(root->left, p,q);
            else if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p,q);
            else  return root;
        }
    };