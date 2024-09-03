#include<iostream>
using namespace std;

bool mySqrt(int x) {
        int lo=0;
        int hi=x;
        bool  flag=false;
        while(lo<=hi){
            long long mid=(lo+hi)/2;
            if(mid*mid==x) 
                { 
                cout<<"it is a perfect square";
                flag=true;
                break;
                }
            else if(mid*mid>x) hi=mid-1;
            else lo=mid+1; 
        }
        return flag;
        
    }

int main(){
    int x;
    cin>>x;
    cout<<"perfect square?"<<mySqrt(x);

}