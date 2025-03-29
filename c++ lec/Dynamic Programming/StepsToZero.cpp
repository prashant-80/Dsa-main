#include<iostream>
using namespace std;

vector<int> digit(int n){
    vector<int> ans;
    while(n){
        if(n%10 !=0){
             ans.push_back(n%10);
        }
        n/=10;
    }
    return ans;
}

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    vector<int> digits = digit(n);
    int result = INT_MAX;
    for(int i=0;i<digits.size();i++){
       result = min(result,f(n-digits[i]));
    }
    return 1+result;
}

int main(){
    int n;
    cin >> n;
    cout<<"Steps to reduce "<<n<<" to 0:"<<f(n);
}