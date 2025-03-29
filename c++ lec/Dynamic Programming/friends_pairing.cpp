#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    int single = f(n - 1);
    int pair = (n - 1) * f(n - 2); //we have to select 1 out of n-1 so nc1 = n-1 and then we have to select n-2 people from n-2 people so f(n-2)
    
    return single + pair;
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
}
