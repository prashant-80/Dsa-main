//approach
// Use Boyer-Moore Voting Algorithm to find the majority element in linear time and constant space
#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>

class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int count = 0;
            int candidate = 0;
            
            for (int num : nums) {
                if (count == 0) {
                    candidate = num;
                }
                
                count += (num == candidate) ? 1 : -1;
            }
            
            return candidate;
        }
        
        // Function to find elements that appear more than n/3 times
        vector<int> majorityElementII(vector<int>& nums) {
            int count1 = 0, count2 = 0;
            int candidate1 = 0, candidate2 = 1;  // Initialize with different values
            
            // First pass: find potential candidates
            for (int num : nums) {
                if (num == candidate1) {
                    count1++;
                } else if (num == candidate2) {
                    count2++;
                } else if (count1 == 0) {
                    candidate1 = num;
                    count1 = 1;
                } else if (count2 == 0) {
                    candidate2 = num;
                    count2 = 1;
                } else {
                    count1--;
                    count2--;
                }
            }
            
            // Second pass: count occurrences to verify
            count1 = count2 = 0;
            for (int num : nums) {
                if (num == candidate1) count1++;
                else if (num == candidate2) count2++;
            }
            
            vector<int> result;
            if (count1 > nums.size() / 3) result.push_back(candidate1);
            if (count2 > nums.size() / 3) result.push_back(candidate2);
            
            return result;
        }
    };
