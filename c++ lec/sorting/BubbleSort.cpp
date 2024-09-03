#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;  //to check if the array is already in sorted order or not
        for (int j = 0; j < n - 1 - i; j++)  //i to decrease no of  operation per pass
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}