// Leetcode 20. Valid Parentheses
#include<iostream>
using namespace std;
#include<stack>

//approach
//we use a stack to keep track of the opening brackets.
//when we encounter a closing bracket, we check if it matches the top of the stack.
//if it does, we pop the stack. If it doesn't, we return false.

class Solution {
    public:
        bool isValid(string str) {
            stack<char> st;
            for(int i=0;i<str.size();i++){
                if(str[i]=='[' ||  str[i]=='(' ||  str[i]=='{'){
                    st.push(str[i]);
                }
                else if(str[i]==']' && !st.empty() && st.top()=='['){
                    st.pop();
                }
                else if(str[i]=='}' && !st.empty() && st.top()=='{'){
                    st.pop();
                }
                else if(str[i]==')' && !st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    return false;
                }
    
            }
            return st.empty();
    
        }
    };