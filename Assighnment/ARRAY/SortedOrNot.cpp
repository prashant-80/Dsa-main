#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {2, 3, 1, 4};
    for (int i = 1; i < 5; i++)
    {
        // Unsorted pair found
        if (arr[i - 1] > arr[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    // No unsorted pair found
    cout << "YES" << endl;
    return 0;
}