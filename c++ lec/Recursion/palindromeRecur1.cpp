#include <iostream>
using namespace std;

bool f(int num, int *temp)
{
    if (num >= 0 && num <= 9)
    {
        int lastdigit = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastdigit);
    }
    bool result = f(num / 10, temp) && (num % 10 == (*temp) % 10);
    (*temp) /= 10;
    return result;
}

int main()
{
    int num = 1441;
    int anothernum = num;
    int *temp = &anothernum;
    bool result = f(num, temp);
    cout << result;
}
