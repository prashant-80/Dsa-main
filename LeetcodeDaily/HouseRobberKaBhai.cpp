//solving questions with brain power - leetcode 2140

// https://leetcode.com/problems/solving-questions-with-brainpower/
// Approach:
// 1. Use dynamic programming to keep track of the maximum points that can be obtained from each question.
// 2. Create a dp array where dp[i] represents the maximum points that can be obtained starting from question i.
// 3. For each question, you have two choices: either pick the question or skip it.
// 4. If you pick the question, you gain points equal to the value of the question and move to the next question after skipping the specified number of questions.
// 5. If you skip the question, you simply move to the next question.
// 6. The base case is when you reach the end of the questions, where you cannot gain any more points.
// 7. The final answer will be the maximum points that can be obtained starting from the first question.
// 8. The time complexity is O(n) where n is the number of questions, and the space complexity is O(n) for the dp array.

class Solution {
    public:
        vector<long long> dp;
    
        long long f(vector<vector<int>> &nums, int idx){
            if(idx >= nums.size()) return 0;
            if(dp[idx]!=-1) return dp[idx];
            long long notpick = f(nums, idx+1);
            long long pick = nums[idx][0] + f(nums, idx+nums[idx][1]+1);
    
            return dp[idx] = max(notpick, pick); 
        }
    
        long long mostPoints(vector<vector<int>>& questions) {
            dp.resize(100005, -1);
            return f(questions, 0);
        }
    };