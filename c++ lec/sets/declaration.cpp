#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> myset;
    set<int> set2 = {1,2,3,4};  //by default increasing order
    set<int,greater<int>> set3={3,7,9,3}; //decreasing order

    //insert into set
    myset.insert(4);
    myset.insert(3);
    myset.insert(1);  //O(logn)
    myset.insert(8); //dublicate not  allowed
    myset.insert(9);
    myset.insert(5);
    myset.insert(2);  //-->return an iterator to the inserted value

    cout<<myset.size();
    //traversing the set

        //setname.begin();   
        //setname.end();  --> pointer pointing position after the last element
        cout<<endl;
        set<int>::iterator itr;  //iterators used to iterate through stl containers
        for(itr = myset.begin();itr!=myset.end();itr++){
            cout<<*itr<<endl;
        }
            cout<<endl;

            
        for(auto value:myset){  //for each or auto iterator 
            cout<<value<<" ";
        }
        cout<<endl;

        for(auto value:set2){
            cout<<value<<" ";
        }
        cout<<endl;

      //finding the element
        
        if(myset.find(3) != myset.end()){
            cout<<"Element is present in the array"<<endl;
        }

        //count 
        cout<<"Occurance"<<endl;
        cout<<myset.count(3);

        //deleting element from set
        myset.erase(myset.begin());
        //setname.erase(startpos,endpos);  //excluding endpos ele

        

}
