#include <iostream>
using namespace std;

class number
{
private:
    int no,i;

public:
    void getdata();

    void calculation()
    {
        for (int i = 2; i < no; i++)
        {
            if (no % i == 0)
            break;
            
            }
if(i==no)
{
cout<<"no is prime";
}

else
{
cout<<"no is not prime";
}
}
    };  
       
        
        
            
void number::getdata()
{
    cout << "enter the no";
    cin >> no;
}

int main()

{
    number n;
    n.getdata();
    n.calculation();

    return 0;
}
