// Approach:
// Use a stack to evaluate the expression
// Time Complexity: O(n) where n is the number of tokens
// Space Complexity: O(n) for the stack

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for (string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b);
            } else {
                // Convert string to integer
                st.push(stoi(token));
            }
        }
        
        return st.top();
    }
};
