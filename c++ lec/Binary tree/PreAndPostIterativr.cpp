#include <iostream>
#include <climits>
#include <algorithm>
#include <math.h>
#include<queue>
#include<stack>
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
return root;
}

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
void Preorder(Node* root){
    stack<Node*> st;
    st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        cout<<temp->val<<" ";
        st.pop();
        if(temp->right!= NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
}

void Postorder(Node* root){
  stack<Node*> st;
  st.push(root);
  vector<int> ans;
  while(st.size()>0){
    Node* temp = st.top();
    st.pop();
    ans.push_back(temp->val);
    if(temp->left !=NULL) st.push(temp->left);
    if(temp->right !=NULL) st.push(temp->right);

  }
  reverse(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

}

int main(){
    int arr[] = {1,2,3,4,5,6,INT_MIN,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    //Preorder(root);
    //LevelOrder(root);
    Postorder(root);

}