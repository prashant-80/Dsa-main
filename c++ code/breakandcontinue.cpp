
#include <iostream>
using namespace std;

// namespace std;
int main()
{

    for (int i = 0; i < 30; i++)
    {

        if (i == 20)
        {
            continue;
        }
        if (i == 25)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}
