 
 
 
 #include <iostream>
using namespace std;
class number
{
private:
    int a;
public:
void getdata()
{
cin>>a;
}

void display(){
    cout<<a;
}

 number add(number  N2)
{
    number N3;
    N3.a=a+N2.a;
    return N3;
}
};
int main()
{
number N1,N2,N3;
cout<<"enter the 1st no";
N1.getdata();
cout<<"enter the 2nd no:";
N2.getdata();
N3=N1.add(N2);
cout<<"sum";
N3.display();




    return 0;

}