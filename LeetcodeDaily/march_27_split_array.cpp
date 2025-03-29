#include<unordered_map>
#include<vector>


//Input: nums = [1,2,2,2]
//Output: 2
//Explanation: We can split the array at index 2 to obtain arrays [1,2,2] and [2]. 
//in each partition the dominant number should be same

// Here's a brief breakdown of how the solution works:

// 1. Find the dominant element:
//     - Use hashmap to count frequencies
//     - Find number that appears more than n/2 times (maxi)

// 2. Check split possibility:
//     - Track count of dominant element from left side
//     - For each index i:
//       - If left count > (i+1)/2 and remaining count > (n-(i+1))/2
//       - Return that index

// 3. Return -1 if no valid split found

// The code checks if we can split array such that same number is dominant in both parts. Numbers that appear more than half the length of their respective parts are considered dominant.





class Solution {
    public:
        int minimumIndex(vector<int>& nums) {
            //in each split the domiannt should bw same 
            unordered_map<int,int> mp;
            for(auto ele:nums){
                mp[ele]++;
            }
            int n = nums.size();
            int maxi = 0;
            for(auto ele:mp){
                if(ele.second > n/2) maxi = ele.first;
            }
    
            int left = 0;
            for(int i = 0;i<nums.size();i++){
                if(nums[i] == maxi){
                    left++;
                }
                if(left > (i+1)/2 &&  ((mp[maxi] - left) > ((n - (i+1))/2))) return i;
            }
            return -1;
        }
    };