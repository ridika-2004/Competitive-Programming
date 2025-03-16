#include <iostream>
#define TABLE_SIZE 10
#define EMPTY -1
#define PRIME 7  // A prime number smaller than TABLE_SIZE

class HashTableDouble {
    int table[TABLE_SIZE];

public:
    HashTableDouble() {
        for (int i = 0; i < TABLE_SIZE; i++) table[i] = EMPTY;
    }

    int hash1(int key) {
        return key % TABLE_SIZE;
    }

    int hash2(int key) {
        return PRIME - (key % PRIME);
    }

    void insert(int key) {
        int index = hash1(key);
        int i = 0;
        while (table[(index + i * hash2(key)) % TABLE_SIZE] != EMPTY) {
            i++;
            if (i >= TABLE_SIZE) return; // Table full
        }
        table[(index + i * hash2(key)) % TABLE_SIZE] = key;
    }

    bool search(int key) {
        int index = hash1(key);
        int i = 0;
        while (table[(index + i * hash2(key)) % TABLE_SIZE] != EMPTY) {
            if (table[(index + i * hash2(key)) % TABLE_SIZE] == key) return true;
            i++;
            if (i >= TABLE_SIZE) return false;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < TABLE_SIZE; i++)
            std::cout << i << " -> " << (table[i] == EMPTY ? "EMPTY" : std::to_string(table[i])) << "\n";
    }
};

int main() {
    HashTableDouble ht;
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    
    std::cout << "Search 20: " << (ht.search(20) ? "Found\n" : "Not Found\n");
    ht.display();
}
