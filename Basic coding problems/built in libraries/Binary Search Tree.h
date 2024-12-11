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

Node* bstinsertIntoBST(Node* root, int d) {
    if (root == NULL) {
        return new Node(d);
    }
    if (d < root->data) {
        root->left = bstinsertIntoBST(root->left, d);
    } else if (d > root->data) {
        root->right = bstinsertIntoBST(root->right, d);
    }
    return root;
}

Node* bstfindMin(Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* bstfindMax(Node* root) {
    while (root && root->right != NULL) {
        root = root->right;
    }
    return root;
}

Node* bstdeleteNode(Node* root, int d) {
    if (root == NULL) {
        return root;
    }

    if (d < root->data) {
        root->left = bstdeleteNode(root->left, d);
    } else if (d > root->data) {
        root->right = bstdeleteNode(root->right, d);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = bstfindMin(root->right);
        root->data = temp->data;
        root->right = bstdeleteNode(root->right, temp->data);
    }

    return root;
}

void bsttakeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = bstinsertIntoBST(root, data);
        cin >> data;
    }
}

bool bstsearch(Node* root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x) {
        return true;
    }
    if (x < root->data) {
        return bstsearch(root->left, x);
    }
    return bstsearch(root->right, x);
}

void bsttraverseLevelOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
}

void bsttraversePreorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    bsttraversePreorder(root->left);
    bsttraversePreorder(root->right);
}

void bsttraverseInorder(Node* root) {
    if (root == NULL) {
        return;
    }
    bsttraverseInorder(root->left);
    cout << root->data << " ";
    bsttraverseInorder(root->right);
}

void bsttraversePostorder(Node* root) {
    if (root == NULL) {
        return;
    }
    bsttraversePostorder(root->left);
    bsttraversePostorder(root->right);
    cout << root->data << " ";
}
