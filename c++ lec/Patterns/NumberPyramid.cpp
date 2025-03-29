#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    int nst = 1;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
                 //spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;

                //1st triangle
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        
                //2nd Triangle
        int a = i - 1;
        for (int l = 1; l <= i - 1; l++)
        {
            cout << a;
            a--;
        }

        cout << endl;
    }
}