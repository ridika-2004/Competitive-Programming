#include<bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode* children[26]= {};
    bool is_word =false;
};

class Trie {
    TrieNode* root;

    public:
    Trie() { 
        root =new TrieNode(); 
    }

    void insert(string& word) {
        TrieNode* node =root;
        for (char c : word) {
            int index= c-'a';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->is_word = true;
    }

    bool search(string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int index= c-'a';
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return node->is_word;
    }

    void display(TrieNode* node, string prefix) {
        if (node->is_word) {
            cout<<prefix<<endl;
        }
        for (int i = 0; i < 26; ++i)
            if (node->children[i]) {
                display(node->children[i], prefix + char('a' + i));
            }
    }

    void display() { display(root, ""); }
};

int main() {
    int N,Q;
    cin>>N>>Q;
    Trie trie;
    string word;

    for (int i=0;i<N;i++) {
        cin>>word;
        trie.insert(word);
    }
    
    trie.display();

    for (int i=0;i<Q;i++) {
        cin>>word;
        if(trie.search(word)){
            cout<<"T"<<endl;
        }
        else {
            cout<<"F"<<endl;
        }
    }

    cout<<endl;
    return 0;
}
