#include<iostream>
using namespace std;
int f(int n){
    if(n>=0 && n<=9) return n;
    else return (n%10) + f(n/10) ;

}
int main(){
    int sum=f(534);
    cout<<sum;
}