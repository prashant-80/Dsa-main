#include<algorithm>
#include<climits>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int tar;
    cout<<"enter target : ";
    cin>>tar;

    sort(a, a + n);    //first  and  last address  

    int hi=n-1;
    int lo=0;
    bool flag=false;
    while(hi>=lo){
        int mid=(lo+hi)/2;
        if(a[mid]>tar) hi = mid-1;
        else if(a[mid]<tar) lo = mid+1;
        else {
            cout<<"target found at "<<mid;
            flag = true;
            break;
        }
    }
    if(flag==false) cout<<"element not found";
}