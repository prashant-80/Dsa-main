#include <iostream>
#include <vector>
using namespace std;

int c=0;

void merge(vector<int> &arr, vector<int> &brr, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < arr.size() && j < brr.size())
    {
        if (arr[i] < brr[j])
            res[k++] = arr[i++];
        else
            res[k++] = brr[j++];
    }
    if (i == arr.size())
        while (brr.size() > j)
            res[k++] = brr[j++];
    if (j == brr.size())
        while (arr.size() > i)
            res[k++] = arr[i++];
}

int inversion(vector<int> &a,vector<int> &b){
    int count=0;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) {
             count+=a.size()-i;
             j++;
        }
        else i++;       
    }
    return count;
}


void mergeSort(vector<int> &v)
{

    // divide
    int n = v.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    // copy pasting
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = v[j + n1];
    }
    // recursion
    mergeSort(a);
    mergeSort(b);

    //inversion
    c+=inversion(a,b);
    // merge
    merge(a, b, v);
}



int main()
{
    int arr[] = {1, 4, 5, 6, 2, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n); // copying array method in vector
    mergeSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout<<endl;
    cout<<"Inversion count= "<<c;
}