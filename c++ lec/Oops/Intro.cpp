#include<iostream>
using namespace std;
class Fruit{
    public:
    string name;
    string color;
};


int main(){
    Fruit *mango=new Fruit();
    mango->name = "mango";
    mango->color = "yellow";
    cout<<mango->name<<" "<<mango->color;
}