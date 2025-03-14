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

Node* btinsert(Node* root) {
    int data;
    cout << "Enter value (-1 for no node): ";
    cin >> data;

    if (data == -1) {
        return root;
    }

    if (root == NULL) {
        return new Node(data);
    }
    cout << "Enter left value for " << data << ": ";
    root->left = btinsert(root->left);
    cout << "Enter right value for " << data << ": ";
    root->right = btinsert(root->right);

    return root;
}

Node* btdeleteNode(Node* root, int d) {
    if (root == NULL) {
        return root;
    }

    if (root->data == d) {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node* temp = root->left;
            while (temp->right != NULL) {
                temp = temp->right;
            }
            root->data = temp->data;
            root->left = btdeleteNode(root->left, temp->data);
        }
    }
    else {
        root->left = btdeleteNode(root->left, d);
        root->right = btdeleteNode(root->right, d);
    }
    return root;
}

bool btsearch(Node* root, int x)
{
    if(root==NULL)
    {
        return false;
    }
    if (root->data == x) {
        return true;
    }
    return btsearch(root->left, x) || btsearch(root->right, x);
}

void bttraverseLevelOrder(Node* root) {
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

void bttraversePreorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    bttraversePreorder(root->left);
    bttraversePreorder(root->right);
}

void bttraverseInorder(Node* root) {
    if (root == NULL) {
        return;
    }
    bttraverseInorder(root->left);
    cout << root->data << " ";
    bttraverseInorder(root->right);
}

void bttraversePostorder(Node* root) {
    if (root == NULL) {
        return;
    }
    bttraversePostorder(root->left);
    bttraversePostorder(root->right);
    cout << root->data << " ";
}
