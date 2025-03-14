#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertintobst(Node* root, int d) {
    if (root == NULL) {
        root = new Node(d);
        return root;
    }
    if (d > root->data) {
        root->right = insertintobst(root->right, d);
    } else {
        root->left = insertintobst(root->left, d);
    }
    return root;
}

void takeinput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertintobst(root, data);
        cin >> data;
    }
}

bool search(Node* root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x) {
        return true;
    }
    if (root->data > x) {
        return search(root->left, x);
    }
    return search(root->right, x);
}

void traverse_inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    traverse_inorder(root->left);
    cout<<root->data<<" ";
    traverse_inorder(root->right);
}

int main() {
    Node* root = NULL;
    cout << "Enter data for BST (enter -1 to stop):" << endl;
    takeinput(root);

    cout << "Level Order Traversal of the BST:" << endl;
    traverse_inorder(root);

    return 0;
}

