#include<iostream>
using namespace std;

int main(){

int arr[5];
cout<<"enter the numbers";
for(int i=0;i<5;i++){
  cin>>arr[i];

}

int max = INT_MIN;
for(int i=0;i<5;i++){
  if(arr[i]>max) max = arr[i];
}

cout<<"greatest number is "<<max;

}