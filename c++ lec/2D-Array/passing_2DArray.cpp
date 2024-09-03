#include<iostream>
using namespace std;

void change(int arr[2][2])   //size  is mandatory in 2d array
{
    arr[0][0]=100;
}
int main()
{
    int arr[2][2]={2,3,4,5};
    change(arr);
}