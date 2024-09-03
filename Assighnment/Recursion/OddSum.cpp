#include<iostream>
using namespace std;
int  sum(int a,int b){
    if(a>b) sum(b,a);
    if(a==b) return b;
    else if(a%2!=0){
        return a + sum(a+1,b);
    }
    return sum(a+1,b);
}
int main(){
    int a=1;
    int b=9;
    int su=sum(a,b);
    cout<<su;
}