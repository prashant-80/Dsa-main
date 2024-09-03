#include <iostream>
#include <vector>
using namespace std;


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


void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}



int main()
{
    int n,k;
    vector<int> v;
    cout<<"Enter the value of k";
    cin>>k;
    cout << "Enter number  of elements";
    cin >> n;

    cout << "Enter Elements";
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (k>n) k=k%n;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);    
    display(v);
}
