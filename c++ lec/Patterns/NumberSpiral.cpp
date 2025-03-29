 #include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of rows";
    cin >> n;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
        if(i==2*n-1 || j==2*n-1 || j==1 || i==1)
        {
                cout<<n;
        }
             
              

        }
        cout<<endl;

    }


}