#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // vector declaration
    v.resize(5);
    cout << v.size()<<endl;
    v.push_back(2);
    v.push_back(3);
    

     cout << v.size()<<endl;
     v.pop_back();
     v.insert(v.begin()+1,23);
      cout << v.size()<<endl;

      v.erase(v.end()-4);
      cout<<v.size()<<endl;

      v.clear();
      cout<<v.size()<<endl;




     


    return 0;
}