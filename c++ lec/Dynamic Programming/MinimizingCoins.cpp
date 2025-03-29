#include<iostream>
#include<vector>
#include<climits>
using namespace std;


vector<int> dp(1000005,-2);
int f(vector<int> &coins, int sum){
    if(sum == 0) return 0;
    if(dp[sum]!=-2) return dp[sum];
    int result = INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(sum-coins[i]<0) continue;
        result = min(result, f(coins, sum-coins[i]));
    }
    if(result == INT_MAX) return dp[sum] = INT_MAX; 
    return dp[sum] = 1+result;
}


int main(){
    vector<int> coins;
    int  n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        coins.push_back(num);
    }
    int ans = f(coins,x);
    if(ans == INT_MAX) cout<<-1;
    else cout<<ans<<"\n";

 return 0;
}