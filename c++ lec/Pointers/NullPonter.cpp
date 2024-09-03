#include<iostream>
using namespace std;
int main()
{
    int* ptr1=NULL;   //reserved address
    int* ptr2=(int)'\0';
    int* ptr3=0;

    //Double pointer 
    int **ptr=&ptr1;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
     cout<<ptr3<<endl;
      cout<<ptr<<endl;
}
