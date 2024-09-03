#include<iostream>
using namespace std;
#include<queue>

int main(){
return 0;
}

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum = 0;
        priority_queue<int, vector<int>, greater<int> > pq(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        while(k--){
            int ele = pq.top();
            sum-=ele;
            pq.pop();
            pq.push(-1*ele);
            sum+=(-1*ele);
        }
        return sum;
    }
};