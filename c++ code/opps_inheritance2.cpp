#include<iostream>
using namespace std;

class length
{

    protected:
int a;
public:
void getdatal(){
    cout<<"enter the length";
    cin>>a;
}

void displayl(){
    cout<<"the length   is"<<a;

}
};

class breadth
{
    protected:
int b;
public:
void getdatab()
{
    cout<<"enter the breadth";
    cin>>b;
}
void displayb(){
    cout<<"the breath is:"<<b;
}

};

class area:public  length,public  breadth
{
    private:
    int area;
    public:
    void getarea()

{
    area=a*b;
}
void displayarea()
{
    cout<<"area of rectangle is"<<area;
}

};


int main()
{
    area a;
    a.getdatal();
    a.displayl();
    a.getdatab();
    a.displayb();
    a.getarea();
    a.displayarea();
    return 0;

}