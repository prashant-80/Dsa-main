#include <iostream>
#include <climits>
#include <algorithm>
#include <math.h>
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

int Level(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(Level(root->left), Level(root->right));
}

void NthLevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    NthLevel(root->left, curr + 1, level);
    NthLevel(root->right, curr + 1, level);
}

void NthLevelRev(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    NthLevel(root->right, curr + 1, level);
    NthLevel(root->left, curr + 1, level);
}

void LevelOrdertraversal(Node* root){
    int n = Level(root);
    for(int i=1;i<=n;i++){
        NthLevel(root,1,i);
        cout<<endl;
    }
}

void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
    
}
void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
     cout<<root->val<<" ";
}

void Inorder(Node* root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
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
    cout<<"Level Order Traversal:"<<endl;
    LevelOrdertraversal(a);
    cout<<endl;
    preOrder(a);
    cout<<endl;
    postOrder(a);
    cout<<endl;
    Inorder(a);
    
}