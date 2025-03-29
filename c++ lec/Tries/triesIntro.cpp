//2 string might be having common prefixes and hashmaps will not able to utilize this property
//3 Tries are used to store strings in a way that we can search for a string in O(L) time where L is the length of the string

//In trie 
//1.we make a node for each character
//2. and if two string have common prefixes then we can store them in a single node
//3. node contains a data, hashmap(char,node) of children and a boolean value to check if the node is terminal or not
#include<iostream>  
#include<unordered_map>
using namespace std;


class Node{
    public:
    char data;
    bool terminal;
    unordered_map<char,Node*> children;
    Node(char data){
        this->data = data;
        this->terminal = false;
    }
    void makeTerminal(){
        this->terminal = true;
    }
    bool isTerminal(){
        return this->terminal == true;
    }
};

class Trie {
public:
   Node* root;
    Trie() {
        root = new Node('\0');
    }
    
    void insert(string word) {
        Node* curr = root;
        for(int i=0;i< word.length();i++){
            char ch = word[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
            }else{
                Node* child = new Node(ch);
                curr->children[ch] = child;
                curr = child;
            }
        }
        curr->makeTerminal();
    }
    
    bool search(string word) {
        Node* curr = root;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
            }else{
                return false;
            }
        }
        return curr->isTerminal();
    }
    
    bool startsWith(string prefix) {
         Node* curr = root;
        for(int i=0;i<prefix.size();i++){
            char ch = prefix[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
            }else{
                return false;
            }
        }
        return true;
    }
};

