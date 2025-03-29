#include<iostream>
#include<vector>
#include<climits>
using namespace std;


vector<int> getDigits(int n){
    vector<int>result;
    while(n>0){
        if(n%10 != 0) result.push_back(n%10);
        n/=10;
    }
    return result;
}

vector<int> dp;

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!= -1) return dp[n];

    vector<int> d = getDigits(n);
    int result = INT_MAX;
    for(int i=0;i<d.size();i++){
        result = min(result, f(n-d[i]));
    }

    return dp[n] = 1 + result;
}

int main(){
    dp.resize(1000005,-1);
    int n; 
    cin >> n;
    cout<<f(n)<<"\n";
    return 0;
}