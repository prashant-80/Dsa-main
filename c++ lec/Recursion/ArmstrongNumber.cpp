#include<iostream>
using namespace std;

int pow(int p,int q){
  //  if(q==0) return 1; //base case
    // else return p*f(p,q-1);

    //second method
    
    //base case
    if(q==0) return 1;
    if(q%2 == 0) {
        //if q is even
        int result=pow(p,q/2);
        return result*result;
    }else{
        //if q is odd
        int result=pow(p,(q-1)/2);
        return p*result*result;
    }
}

int f(int n,int d){
    if(n==0) return 0;
    return pow(n%10,d) + f(n/10,d);

}

int main()
{
    int num=153;
    int result=f(num,3);   //3 is no of digits obtain it by iterating
    if(result==num){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}