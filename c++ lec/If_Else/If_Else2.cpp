#include <iostream>
using namespace std;

int main()
{
    // absolute value
    // int no;
    // cout<<"Enter the  no";
    // cin>>no;
    // // if(no>0)
    // // cout<<"absolute value is"<<no;

    // // else
    // // cout<< (-no);
    // if(no<0)
    // {
    //     no=-no;
    // }
    // cout<<no;

    // profit or loss

    // int sp,cp;
    // cout<<"Enter the selling price";
    // cin>>sp;
    // cout<<"Enter the cost price";

    // cin>>cp;
    // if(sp>cp)
    // {
    //     cout<<"profit="<<sp-cp;
    // }
    // if(sp<cp)
    // {
    //     cout<<"loss="<<cp-sp;

    // }
    // if(sp==cp)
    // {
    //     cout<<"no profit,no loss";
    // }

    int n;
    cout << "Enter the number";
    cin >> n;
    if (n >= 100 && n < 1000)
    {
        cout << n << " is a 3 digit number";
    }
    else
        cout << n << " is not a 3 digit number";
}