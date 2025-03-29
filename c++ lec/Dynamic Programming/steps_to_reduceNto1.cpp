#include<iostream>
#include<vector>
using namespace std;
vector<int> dp;

int f(int n){
    if(n==1) return 1;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1 + min(min(f(n-1) , (n%2==0)?f(n/2):INT_MAX) , (n%3==0)?f(n/3):INT_MAX);
}

int main(){
    dp.resize(1000000,-1);
    int n;
    cin >> n;
    cout<<f(n);
}