#include <iostream>
#include <vector>
#include <queue>


// Leetcode 102
// Binary Tree Level Order Traversal

//optimal approach 
//1. Use a queue to perform level order traversal
//2. For each level, store the values in a vector
//3. Push the left and right children of each node into the queue
//4. Continue until the queue is empty
//5. Return the list of vectors containing the level order traversal
//6. Time complexity is O(n) and space complexity is O(n) for the queue

using namespace std;
class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
         queue<TreeNode*> qu;
         vector<vector<int>> result;
         qu.push(root);
    
         while(!qu.empty()){
            int size = qu.size();
            vector<int> ans;
            for(int i =0;i<size;i++){
                TreeNode* front = qu.front();
                qu.pop();
                ans.push_back(front->val);
                if(front->left) qu.push(front->left);
                if(front->right) qu.push(front->right);
            }
            result.push_back(ans);
         }   
         return result;
    
        }
    };