#include<iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(i<n && q.size()>0){
        Node* temp  = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l  = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=INT_MIN) r  = new Node(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if( l != NULL) q.push(l);
        if( r != NULL) q.push(r);
        i+=2;
        j+=2;

    }
}

int main(){
    Node* root = cons
}