// Leetcode 121. Best Time to Buy and Sell Stock
//approach i used 
//// we maintain two pointers i and j, where i is the index of the minimum element seen so far and j is the current index.
// // For each element, we check if it is less than the minimum element seen so far.
// // If it is, we update i to the current index. Otherwise, we calculate the profit (current element - minimum element) and update maxProfit if the profit is greater than maxProfit.
// // Finally, we return maxProfit.

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int maxProfit = 0;
            int i = 0;
            int j = 1;
            while(j<n){
                if(prices[j] < prices[i]){
                    i = j;
                }else{
                    int profit  = prices[j] - prices[i];
                    maxProfit = max(profit, maxProfit);
                }
                j++;
            }
            return maxProfit ;
        }
    };