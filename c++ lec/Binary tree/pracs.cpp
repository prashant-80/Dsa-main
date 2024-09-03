#include<iostream>
using namespace std;
#include<queue>


class Node{
    public:
    int val;
    Node* left;
    Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }


};

void display(Node* root){  //preorder
    if(root == NULL ) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int levels(Node* root){ //levels;
    if(root == NULL) return 0 ;
    return 1 + max(levels(root->left),levels(root->right));
}

void Nthlevel(Node* root , int level, int curr){
    if(root == NULL) return;
    if(level  == curr){
        cout<<root->val;
        return;
    }
    Nthlevel(root->right, level, curr+1);
    Nthlevel(root->left, level, curr+1);
}

void levelQueue(Node* root){
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
    Node* temp = q.front();
    q.pop();
    cout<< temp->val<<" ";
    if(temp->left != NULL) q.push(temp->left);
    if(temp->right != NULL) q.push(temp->right);
   }

}

 int maxi(Node* root){  //max node 

    if(root==NULL) return INT_MIN;
    return max(root->val, max(maxi(root->left),maxi(root->right)));

 }


int main(){
    Node* a = new Node(20);
    Node* b = new Node(10);
    Node* c = new Node(11);
    Node* d = new Node(11);
    Node* e = new Node(12);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    //display(a);
    //cout<<endl;
    //cout<<levels(a);
    //cout<<endl;
    //cout<<maxi(a);
    levelQueue(a);
}