#include<iostream>
using namespace std;
#include<vector>


// Leetcode 15. 3Sum
//the sum of three integers is zero

//brute force approach
//1. Use three nested loops to find all triplets
//2. Check if the sum of the triplet is zero

//between brute and optimal 
//1.maintain i
//2. maintain a hashmap to search -(arr[i] + arr[j]);
//3. put in hashset to maintain the unique triplets 



//optimal approach
//1. Sort the array
//2. Fix one element and use two pointers to find the other two elements
//3. Skip duplicates to avoid repeated triplets
//4. Return the list of unique triplets
//5. Time complexity is O(n^2) and space complexity is O(1) for the two pointer approach


class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            int n = nums.size();
            vector<vector<int>> ans;
            sort(nums.begin(), nums.end());
            for(int i =0;i<n;i++){
                if(i>0 && nums[i] == nums[i-1]) continue;
                int j = i+1;
                int k = n-1;
                while(j<k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum < 0){
                        j++;
                    }else if(sum>0){
                        k--;
                    }else{
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        ans.push_back(triplet);
                        j++;
                        k--;
                        while(j<k && nums[j] == nums[j-1]) j++;
                        while(j<k && nums[k] == nums[k+1]) k--;
                    }
                }
            }
            return ans;
        }
    };