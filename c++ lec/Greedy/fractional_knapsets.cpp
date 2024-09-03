#include<iostream>
using namespace std;
#include<vector>


bool cmp(pair<int,int> &p1, pair<int,int> &p2){
    //pair<int,int> --> value, weight;
    double r1 = (p1.first*1.0) / (p1.second*1.0);
    double r2 = (p2.first*1.0) / (p2.second*1.0);
    return r1 > r2;
}

double frac(vector<int> &profits, vector<int> &weights, int n, int w){
 vector<pair<int,int> > arr;
 for(int i=0;i<n; i++){
    arr.push_back({profits[i], weights[i]});
    
 }
 sort(arr.begin(),arr.end(),cmp);
 double profit = 0;
 for(int i=0;i<n;i++){
    if(arr[i].second<= w) {
        profit+=arr[i].first;
        w -= arr[i].second;
    }else{
        profit += (arr[i].first*1.0)/(arr[i].second*1.0)*w;
        w = 0;
        break;
    }
 }
 return profit;

}

int main(){
vector<int> profits ;
vector<int> weights ;
profits.push_back(60);
profits.push_back(100);
profits.push_back(120);
weights.push_back(10);
weights.push_back(20);
weights.push_back(30);
int w = 50;
int n  = 3;
cout<<frac(profits,weights,n,w);
}