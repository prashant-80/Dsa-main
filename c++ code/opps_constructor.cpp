                                //  constructor and destructor                               


#include<iostream>
using namespace std;


class show 
{
    private:int a;
    
    public:

    show()     // ---------constructor(to  initialise the  variable)
    {
        a=10;
        cout<<"hello  good morning"<<endl;
        cout<<a<<endl;
    }
    
    
};
int main()
{
    show s;
     return 0;
}