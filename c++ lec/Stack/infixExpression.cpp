#include<iostream>
using namespace std;
#include<stack>

int prio(char ch){
    if(ch=='+' || ch =='-') return 1;
    else return 2;
}

int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}

int main(){
    string s= "7+9*4/8-3";
    stack<int> val;
    stack<int> op;
    for(int i=0;i<s.size();i++){
        //check if s[i] is a digit
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }

        else{
            if(op.size()==0) op.push(s[i]);
            else if(prio(s[i])>prio(op.top())) op.push(s[i]);
            else{
                 //work prio(s[i])<=prio(op.top());
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                char ch =  op.top();
                op.pop();
                int  val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1,val2,ch);
                val.push(ans);
                 }
                 op.push(s[i]);
            }
        }
    }
    //the operator stack  can have value
    while(op.size()>0){
        char ch =  op.top();
                op.pop();
                int  val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1,val2,ch);
                val.push(ans);
    }

    cout<<val.top()<<endl<<7+9*4/8-3;
}