#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6,8,10,12};
    int i=0,j=0,k=0;
    int  arr3[10];
    while(i<4  &&  j<6)
    {

        if(arr1[i]<arr2[j]) 
        {
            arr3[k]=arr1[i];
            i++;
        }
        else {
            arr3[k]=arr2[j];
            j++;
        }
        
        k++;
    }

    if(i==4)
    {
        while(j<6)
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
     if(j==6)
    {
        while(i<4)
        {
            arr3[k]==arr1[i];
            i++;
            k++;
        }
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr3[i]<<" ";
    }
    


}