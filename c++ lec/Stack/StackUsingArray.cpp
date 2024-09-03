#include<iostream>
#include<climits>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;

    public:
    Stack(int c){               //constructor
        this->capacity = c;
        arr = new int[capacity];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Overflow";
            return;
        } 
        this->top++;
        arr[this->top] = data;
    }

    int pop(){
        if(this->top==-1){
            cout<<"underflow";
            return INT_MIN;
        }
        this->top--;
    }

    int Gettop(){
        if(this->top==-1){
            cout<<"underflow";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top == -1;
    }

    int size(){
        return this->top+1;
    }

    bool isFull(){
        return this ->top == this->capacity-1;
    }

};

int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.Gettop();
    
    
}