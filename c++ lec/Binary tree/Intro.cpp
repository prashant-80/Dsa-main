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

void display(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

int sum(Node *root)
{
    if (root == NULL)
        return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int size(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxi(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->val, max(maxi(root->left), maxi(root->right)));
}

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

void LevelOrdertraversal(Node* root){
    int n = Level(root);
    for(int i=1;i<=n;i++){
        NthLevel(root,1,i);
        cout<<endl;
    }
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
    display(a);
    cout << endl;
    cout << sum(a) << endl;
    cout << size(a) << endl;
    cout << maxi(a) << endl;
    cout << Level(a);
    cout << endl;
    NthLevel(a, 1, 2);
    cout << endl;
    LevelOrdertraversal(a);
}