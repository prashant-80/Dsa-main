#include <iostream>
using namespace std;
int main()
{
    int arr[][4] = {{0, 0, 1, 1}, {0, 1, 1, 1}, {1, 1, 1, 1}};
    int noo=0;
    int row = 0;
    int maxOnes = 0;
    for (int i = 0; i < 3; i++)
    {
        int lo = 0;
        int n = 4;
        int hi = n - 1;
        noo = 0;
        int firstOccurence;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (arr[i][mid] == 1)
            {
                firstOccurence = mid;
                hi = mid - 1;
            }
            else if (arr[i][mid] == 0)
                lo = mid + 1;
        }

        noo = n - firstOccurence;
        if (maxOnes < noo)
        {
            maxOnes = noo;
            row = i;
        }

        
    }
    cout <<"Row with maximum ones:"<< row;
}