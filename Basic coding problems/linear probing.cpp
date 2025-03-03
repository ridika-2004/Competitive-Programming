#include <iostream>
#define TABLE_SIZE 10
#define EMPTY -1

class HashTableLinear {
    int table[TABLE_SIZE];

public:
    HashTableLinear() {
        for (int i = 0; i < TABLE_SIZE; i++) table[i] = EMPTY;
    }

    int hash(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key) {
        int index = hash(key);
        while (table[index] != EMPTY) {
            index = (index + 1) % TABLE_SIZE;
        }
        table[index] = key;
    }

    bool search(int key) {
        int index = hash(key);
        int start = index;
        while (table[index] != EMPTY) {
            if (table[index] == key) return true;
            index = (index + 1) % TABLE_SIZE;
            if (index == start) return false;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < TABLE_SIZE; i++)
            std::cout << i << " -> " << (table[i] == EMPTY ? "EMPTY" : std::to_string(table[i])) << "\n";
    }
};

int main() {
    HashTableLinear ht;
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    
    std::cout << "Search 20: " << (ht.search(20) ? "Found\n" : "Not Found\n");
    ht.display();
}
