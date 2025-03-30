//leetcode  = https://leetcode.com/problems/two-sum/

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

//optimal approach 
// Time complexity: O(n)
// Space complexity: O(n)
// Approach: we maintain a hash map to store the elements and their indices.
// For each element, we check if the complement (target - current element) exists in the map.
// If it does, we return the indices of the current element and its complement.

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mp;
            for(int i = 0;i<nums.size();i++){
                if(mp.find(target-nums[i]) !=mp.end()){
                    return {mp[target-nums[i]], i};
                    }
                    else mp[nums[i]] = i;
            }
            return {};
        }
    };