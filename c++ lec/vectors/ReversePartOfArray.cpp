#include <iostream>
#include <vector>
using namespace std; 

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
} 

void reversepart(int i, int j, vector<int> &v)
{

    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    
}
int main()
{
    int n;
    vector<int> v;
    cout << "Enter number  of elements";
    cin >> n;

    cout << "Enter Elements";
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    display(v);
    reversepart(0, 4, v);
    display(v);
}
