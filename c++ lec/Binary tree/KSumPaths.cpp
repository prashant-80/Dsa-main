class Solution {
    public:
      void solve(Node* root, int &count, int currSum, int k, unordered_map<int, int> &mp) {
          if (root == NULL) return;
          currSum += root->data;
          if (currSum == k) count++;
  
          if (mp.find(currSum - k) != mp.end()) {
              count += mp[currSum - k];
          }
          mp[currSum]++;
          solve(root->left, count, currSum, k, mp);
          solve(root->right, count, currSum, k, mp);
  
          mp[currSum]--;
          if (mp[currSum] == 0) {
              mp.erase(currSum);
          }
      }
  
      int sumK(Node *root, int k) {
          unordered_map<int, int> mp;
          int count = 0;
          solve(root, count, 0, k, mp);
          return count;
      }
  };