#include <iostream>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
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

Node *construct(int arr[], int n)
{
    queue<Node *> q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (i < n && q.size() > 0)
    {
        Node *temp = q.front();
        q.pop();
        Node *l;
        Node *r;
        if (arr[i] != INT_MIN)
            l = new Node(arr[i]);
        else
            l = NULL;
        if (j != n && arr[j] != INT_MIN)
            r = new Node(arr[j]);
        else
            r = NULL;
        temp->left = l;
        temp->right = r;
        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);
        i += 2;
        j += 2;
    }
    return root;
}
void leftBoundary(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;
    cout << root->val << " ";
    leftBoundary(root->left);
    if (root->left == NULL)
        leftBoundary(root->right);
}

void rightBoundary(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;
    rightBoundary(root->right);
    if (root->right == NULL)
        rightBoundary(root->left);
     cout << root->val << " ";
}

void bottomBoundary(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void boundary(Node *root)
{
    leftBoundary(root);
    cout << endl;
    rightBoundary(root->right);
    cout << endl;
    bottomBoundary(root);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, INT_MIN, INT_MIN, INT_MIN, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = construct(arr, n);
    boundary(root);
}