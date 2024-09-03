#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(20);
    st.push(20);
    st.push(20);
    st.push(20);
    st.push(20);
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top();
}