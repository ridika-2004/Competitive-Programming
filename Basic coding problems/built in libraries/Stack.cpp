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
    T* front_pointer() const {
        if (empty()) {
            return nullptr;
        }
        return &(head->val);
    }

    ~mySingleList() {
        while (!empty()) {
            pop_front();
        }
    }
};

template<typename T>
class myStack {
private:
    mySingleList<T> list;

public:
    myStack() {}
    void push(T value) {
        list.push_front(value);
    }

    T pop() {
        return list.pop_front();
    }

    bool empty() const {
        return list.empty();
    }

    T* top_pointer() const {
        return list.front_pointer();
    }

    T top() const {
        return list.front();
    }
};

int main() {
    myStack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.top() << endl;

    int* topPtr = stack.top_pointer();
    if (topPtr != nullptr) {
        cout << "Pointer to top element: " << *topPtr << endl;
    }

    while (!stack.empty()) {
        cout << "Popped: " << stack.pop() << endl;
    }

    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl;

    return 0;
}
