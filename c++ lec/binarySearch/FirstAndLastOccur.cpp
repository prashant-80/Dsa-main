#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 2, 2, 2, 3, 3, 3, 4, 4, 4};
    int target = 3;
    int n = 10;
    int lo = 0;
    int hi = n - 1;
    int fo = -1;
    int lasto = -1;
    while (lo <= hi)
    {

        int mid = (lo + hi) / 2;
        if (nums[mid] == target)
        {
                fo = mid;
                hi=mid-1;
        }
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    
    lo = 0;
    hi = n - 1;

    while (lo <= hi)
    {

        int mid = (lo + hi) / 2;
        if (nums[mid] == target)
        {
            lasto=mid;
            lo=mid+1;
           
        }
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    cout << "[" << fo << "," << lasto << "]";
}