#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;
int f(int n){
    if(n==0 || n==1) return n;
    return f(n-1)+ f(n-2);
}

//using db  = memoization  --> top down
int fbu(int n){
    if(n==0 || n==1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = fbu(n-1) + fbu(n-2);
}

//tabulation --bottom up
int fab(int n){
    dp.resize(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
      dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int fabo(int n){
    int a =0;
    int b =1;
    int c ;
    for(int i=2;i<=n;i++){
      c = a+b;
      a = b;
      b = c;

    }
    return c;
}






int main(){
    int n = 5;
    dp.resize(n+1,-1);
    cout<<fbu(n)<<" "<<fab(n)<<" "<<fabo(n);
}