                            // CONDITIONAL PROGRAM-if else

#include <iostream>
using namespace std;
int main()
{
                                        //condition for voting
/*
    cout << "GOOD MORNING......." << endl;
    int age;
    cout << "enter you age";
    cin >> age;
    if ((age < 18) && (age >= 1))
    {
        cout << "you are not eligible for voting "<<endl; 
    }
    else if (age == 18)
    {
         cout << "wait  for 1 year"<<endl;
    }
    else if (age > 18)
    {
        cout << "you are eligible for voting"<<endl; 
    }
    else if (age <= 0)
    {
         cout << "you are not born yet"<<endl;
    }
    */


                                  //greatest between three number

    int a,b,c;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"the greatest number is"<<a;

    }
    else if(b>c){
        cout<<"The  greatest is "<<b;
        
    }
    else{
        cout<<"greatest is "<<c;
    }

    return 0;
}