#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* children[2];  // Two children for 0 and 1
    TrieNode() {
        children[0] = children[1] = nullptr;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a number into the Trie
    void insert(int num) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; --i) {
            int bit = (num >> i) & 1;
            if (!node->children[bit]) {
                node->children[bit] = new TrieNode();
            }
            node = node->children[bit];
        }
    }

    // Find the maximum XOR of `num` with the numbers already in the Trie
    int findMaxXOR(int num) {
        TrieNode* node = root;
        int maxXOR = 0;
        for (int i = 31; i >= 0; --i) {
            int bit = (num >> i) & 1;
            int oppositeBit = bit ^ 1;  // Try to take the opposite bit to maximize XOR

            // If the opposite bit exists, go that way
            if (node->children[oppositeBit]) {
                maxXOR |= (1 << i);
                node = node->children[oppositeBit];
            } else {
                node = node->children[bit];
            }
        }
        return maxXOR;
    }
};

int findMaximumXOR(vector<int>& nums) {
    Trie trie;
    int maxXOR = 0;

    for (int num : nums) {
        trie.insert(num);  // Insert each number into the Trie
    }

    for (int num : nums) {
        maxXOR = max(maxXOR, trie.findMaxXOR(num));  // Find the max XOR for each number
    }

    return maxXOR;
}

int main() {
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    cout << "Maximum XOR: " << findMaximumXOR(nums) << endl;
    return 0;
}
