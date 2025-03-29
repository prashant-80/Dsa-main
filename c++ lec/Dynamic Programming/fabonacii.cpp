#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;


// int f(int n){
//     if(n==0 || n==1) return n;
//     if(dp[n]!=-1) return dp[n];
//     dp[n] = f(n-1) + f(n-2);
//     return dp[n];
// }

int fibo(int n){
    dp[0] = 0;
    dp[1] =1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1, -1);
    cout<<fibo(n);
}