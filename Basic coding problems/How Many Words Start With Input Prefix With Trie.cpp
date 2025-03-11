#include<bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode* children[26]= {};
    int count =0;
};

class Trie {
    TrieNode* root;

    public:
    Trie() { 
        root =new TrieNode(); 
    }

    void insert(string& word) {
        TrieNode* node= root;
        for (char c : word) {
            int index= tolower(c) - 'a';
            if (!node->children[index]) {
                node->children[index]= new TrieNode();
            }
            node= node->children[index];
            node->count++;
        }
    }

    int countPrefix(string& prefix) {
        TrieNode* node= root;
        for (char c : prefix) {
            int index = tolower(c)-'a';
            if (!node->children[index]) { 
                return 0;
            }
            node = node->children[index];
        }
        return node->count;
    }
};

int main() {
    int N, Q;
    cin>>N>>Q;
    Trie trie;
    string word;

    set<string> uniqueWords;
    for (int i=0;i<N;i++) {
        cin>>word;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if (uniqueWords.insert(word).second){
            trie.insert(word);
        }
    }

    for (int i=0;i<Q;i++) {
        cin>>word;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout<<trie.countPrefix(word)<<endl;
    }
    return 0;
}