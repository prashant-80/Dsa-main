// idebtify the sirted half
// trip down the unsoeted one
// check if the target exixts
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    int n = 19;
    int lo = 0;
    int hi = n - 1;
    int target = 2;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo+(hi-lo)/2;
        if (arr[mid] == target)
        {
            cout << mid;
            flag = true;
            break;
        }

        if(arr[lo]==arr[mid] && arr[mid]==arr[hi]){  //shrinking the search space 
                lo=lo+1;                            //3 2 2  3  3 3 3 
                hi=hi-1; 
                continue;                           //lo    mid     hi
        }

        else if (arr[lo] <= arr[mid])
        {
            if (target >= arr[lo] && target <= arr[mid])
                hi = mid - 1;
            else
                lo = mid+ 1;
        }
        else
        {
            if (target >= arr[mid] && target <= arr[hi])
                lo = mid + 1;
            else
                hi = mid - 1;
        }
    }
    if (flag == false)
        cout << "element is not present in the array";
}