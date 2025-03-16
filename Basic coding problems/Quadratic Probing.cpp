#include <iostream>
#define TABLE_SIZE 10
#define EMPTY -1

class HashTableQuadratic {
    int table[TABLE_SIZE];

public:
    HashTableQuadratic() {
        for (int i = 0; i < TABLE_SIZE; i++) table[i] = EMPTY;
    }

    int hash(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key) {
        int index = hash(key);
        int i = 1;
        while (table[index] != EMPTY) {
            index = (hash(key) + i * i) % TABLE_SIZE;
            i++;
            if (i >= TABLE_SIZE) return;
        }
        table[index] = key;
    }

    bool search(int key) {
        int index = hash(key);
        int i = 1;
        while (table[index] != EMPTY) {
            if (table[index] == key) return true;
            index = (hash(key) + i * i) % TABLE_SIZE;
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
    HashTableQuadratic ht;
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    
    std::cout << "Search 20: " << (ht.search(20) ? "Found\n" : "Not Found\n");
    ht.display();
}
