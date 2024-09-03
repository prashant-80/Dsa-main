//pruning = jo call irrelevent hai, usko call nhi lagayenge
//reversal = state chages get revert while returning

#include<iostream>
#include<unordered_set>
using namespace std;

void permutation(string &input , int i){
    if(i == input.size()-1) {
        cout<<input<<endl;
        return;
    }
     unordered_set<int> s;
    for(int idx=i;idx<input.size();idx++){
        if(s.count(input[idx])) continue;
        s.insert(input[idx]);   
        swap(input[idx],input[i]);  //swap 
        permutation(input,i+1);
        swap(input[idx],input[i]); //swap again to get the original string..if we does not do this then it will give error
    }
}

int main(){
    string s = "baa";
    permutation(s,0);
    return 0;
}