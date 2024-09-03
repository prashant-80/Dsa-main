#include<iostream>
using namespace std;
int main()
{
   int arr[] ={1,3,4,5,3,1};
   int *ptr = arr;
   cout<<ptr[1]; 
   cout<<*ptr;

   for(int i=0;i<6;i++){
    cout<<ptr[i]<<" ";
   }
}