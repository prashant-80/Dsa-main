#include <iostream>
#include <climits>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class Stack
{
    Node *head;
    int capacity;
    int currsize;

public:
    Stack(int c)
    {
        this->capacity = c;
        this->currsize = 0;
        head = NULL;
    }
    bool isEmpty()
    {
        return this->head == NULL;
    }
    bool isFull()
    {
        return this->currsize == this->capacity;
    }

    void push(int data)
    {
        if (this->currsize == this->capacity)
        {
            cout << "Overflow";
            return;
        }
        Node *new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currsize++;
    }

    int pop()
    {
        if (this->head == NULL)
        {
            cout << "Underflow";
            return INT_MIN;
        }
        Node *new_head = this->head->next;
        this->head->next = NULL;
        Node *tobeRemoved = this->head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        this->head = new_head;
        return result;
    }

    int Gettop()
    {
        if (this->head == NULL)
        {
            cout << "Underflow";
            return INT_MIN;
        }
        return this->head->data;
    }

    int size()
    {
        return this->currsize;
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.Gettop()<<endl;
    st.pop();
    cout<<st.Gettop();
    
}