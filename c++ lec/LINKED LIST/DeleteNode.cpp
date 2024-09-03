#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

void deleteNode(Node* head,Node* target){
    Node* temp = head;
    while(temp -> next != target){
        temp = temp -> next;

    }
    temp -> next = temp -> next ->next;
    
}

void display(Node* head){
    Node* temp = head;
    while( temp != NULL ){
        cout<< temp -> val << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    a -> next = b;
    b -> next = c;
    c -> next = d;
    display(a);
    deleteNode(a,c);
    display(a);
}