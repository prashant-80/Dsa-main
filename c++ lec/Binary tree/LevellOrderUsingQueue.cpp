#include <iostream>
#include <climits>
#include <algorithm>
#include <math.h>
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

void LevelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
        
    }
    cout<<endl;
}



int main()
{
    Node *a = new Node(10);
    Node *b = new Node(11);
    Node *c = new Node(12);
    Node *d = new Node(15);
    Node *e = new Node(19);
    Node *f = new Node(21);
    Node *g = new Node(18);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    LevelOrder(a);


}