//set
//stores unique value
//stores in orderd manner-> increasing our decreasing
//it has no indexing,elements are identified by their own values 
//every value is inserted in set cannot be modified


//advantage sof sets
//unique values--> ordered manner-> dynamic size-> faster (insertion,deletion,search)
//O(logn) 
//disadvantage
//cannot acces an element using indexing -> uses more memory than array -> 
//not suitable for large datasets   


#include<unordered_set>
#include<iostream>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(15);
    s.insert(14);
    s.insert(13);
    s.insert(12);
    s.insert(11);
    s.insert(31);
    s.insert(81);

    s.erase(12);

    cout<<s.count(14);
    cout<<endl;
    for(int ele:s){
        cout<<ele<<" ";
    }
}

