// Leetcode 150. Evaluate Reverse Polish Notation
#include <vector>
#include <string>
#include <stack>

using namespace std;

//optimal approach
//1. Use a stack to evaluate the expression
//2. For each token, check if it is an operator or a number
//3. If it is a number, push it onto the stack
//4. If it is an operator, pop the top two elements from the stack
//5. Perform the operation and push the result back onto the stack
//6. Continue until all tokens are processed
//7. The final result will be the only element left in the stack
//8. Time complexity is O(n) and space complexity is O(n) for the stack

class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> st;
            
            for (string token : tokens) {
                if (token == "+" || token == "-" || token == "*" || token == "/") {
                    int b = st.top(); st.pop();
                    int a = st.top(); st.pop();
                    int result = 0;
                    if (token == "+") result = a + b;
                    else if (token == "-") result = a - b;
                    else if (token == "*") result = a * b;
                    else if (token == "/") result = a / b;  
                    st.push(result);
                } else {
                    st.push(stoi(token));
                }
            }
            
            return st.top();
        }
    };