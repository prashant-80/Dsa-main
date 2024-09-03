// idebtify the sirted half
// trip down the unsoeted one
// check if the target exixts
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9;
    int lo = 0;
    int hi = n - 1;
    int target = 10;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target)
        {
            cout << mid;
            flag = true;
            break;
        }

        else if (arr[lo] <= arr[mid])
        {
            if (target >= arr[lo] && target <= arr[mid])
                hi = mid - 1;
            else
                lo = hi + 1;
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