#include <iostream>
using namespace std;

template<typename T>
class mySingleList {
private:
    class myNode {
    public:
        T val;
        myNode* next;

        myNode(T data) {
            val = data;
            next = nullptr;
        }
    };

    myNode* head;

public:
    mySingleList() : head(nullptr) {}

    bool empty() const {
        return head == nullptr;
    }

    void push_front(T value) {
        myNode* newNode = new myNode(value);
        newNode->next = head;
        head = newNode;
    }

    T pop_front() {
        if (empty()) {
            throw runtime_error("List is empty. Cannot pop.");
        }
        T frontValue = head->val;
        myNode* temp = head;
        head = head->next;
        delete temp;
        return frontValue;
    }

    T front() const {
        if (empty()) {
            throw runtime_error("List is empty. Cannot access front.");
        }
        return head->val;
    }

    void show() const {
        if (empty()) {
            cout << "List is empty" << endl;
            return;
        }
        myNode* current = head;
        while (current != nullptr) {
            cout << current->val << " -> ";
            current = current->next;
        }
        cout << "null" << endl;
    }

    ~mySingleList() {
        while (!empty()) {
            pop_front();
        }
    }
};

int main() {
    mySingleList<int> list;

    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    cout << "Current list: ";
    list.show();

    cout << "Front element: " << list.front() << endl;

    list.pop_front();
    cout << "After popping front, list: ";
    list.show();

    return 0;
}
