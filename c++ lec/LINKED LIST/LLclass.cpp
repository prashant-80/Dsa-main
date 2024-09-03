#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "invalid index";
        }
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtEnd(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void  deleteAtHead(){
        if(size==0) cout<<"list is  empty";
        else head=head->next;
    }

    void deleteAtTail(){
            if(size==0){
                    cout<<"list is empty";
                    return;
            } 
            else{
                Node* temp=head;
                while(temp->next!=tail){
                    temp=temp->next;
                }
                temp->next=NULL;
                tail=temp;
                size--;
            }
    }

    void deleteAtAnyIdx(int idx){
        if(idx<0 || idx>size){
            cout<<"not a valid";
            return;
        } 
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
                Node* temp=head;
                for(int i=1;i<=idx-1;i++){
                    temp=temp->next;
                }
                temp->next=temp->next->next;
                size--;
        }
    }


    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(10); // Insert at tail
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtHead(90); // Insert at  head
    ll.insertAtHead(100);
    ll.insertAtHead(20);
    ll.insertAtIdx(2, 2500);     // Insert at index
    int result = ll.getAtIdx(4);   // get an element  from  index
    ll.deleteAtHead();   //delete ahead
    ll.deleteAtAnyIdx(3);
    cout << result << endl;
    ll.display();
}
