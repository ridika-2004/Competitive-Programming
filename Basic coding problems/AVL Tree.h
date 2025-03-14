#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
        this->height = 1;
    }
};

int avlgetHeight(Node* root) {
    return root ? root->height : 0;
}

int avlgetBalanceFactor(Node* node) {
    return node ? avlgetHeight(node->left) - avlgetHeight(node->right) : 0;
}

void avlupdateHeight(Node* node) {
    if (node) {
        node->height = 1 + max(avlgetHeight(node->left), avlgetHeight(node->right));
    }
}

Node* avlrightRotate(Node* y) {
    Node* x = y->left;
    y->left = x->right;
    x->right = y;
    avlupdateHeight(y);
    avlupdateHeight(x);
    return x;
}

Node* avlleftRotate(Node* x) {
    Node* y = x->right;
    x->right = y->left;
    y->left = x;
    avlupdateHeight(x);
    avlupdateHeight(y);
    return y;
}

Node* avlinsertIntoAVL(Node* root, int d) {
    if (root == NULL) {
        return new Node(d);
    }
    if (d < root->data) {
        root->left = avlinsertIntoAVL(root->left, d);
    } else if (d > root->data) {
        root->right = avlinsertIntoAVL(root->right, d);
    } else {
        return root;
    }
    avlupdateHeight(root);
    int balance = avlgetBalanceFactor(root);

    if (balance > 1 && d < root->left->data) {
        return avlrightRotate(root);
    }
    if (balance < -1 && d > root->right->data) {
        return avlleftRotate(root);
    }
    if (balance > 1 && d > root->left->data) {
        root->left = avlleftRotate(root->left);
        return avlrightRotate(root);
    }
    if (balance < -1 && d < root->right->data) {
        root->right = avlrightRotate(root->right);
        return avlleftRotate(root);
    }
    return root;
}

Node* avlfindMin(Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* avldeletenode(Node* root, int d) {
    if (root == NULL) {
        return root;
    }
    if (d < root->data) {
        root->left = avldeletenode(root->left, d);
    } else if (d > root->data) {
        root->right = avldeletenode(root->right, d);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            Node* temp = avlfindMin(root->right);
            root->data = temp->data;
            root->right = avldeletenode(root->right, temp->data);
        }
    }
    avlupdateHeight(root);
    int balance = avlgetBalanceFactor(root);
    if (balance > 1 && avlgetBalanceFactor(root->left) >= 0) {
        return avlrightRotate(root);
    }
    if (balance > 1 && avlgetBalanceFactor(root->left) < 0) {
        root->left = avlleftRotate(root->left);
        return avlrightRotate(root);
    }
    if (balance < -1 && avlgetBalanceFactor(root->right) <= 0) {
        return avlleftRotate(root);
    }
    if (balance < -1 && avlgetBalanceFactor(root->right) > 0) {
        root->right = avlrightRotate(root->right);
        return avlleftRotate(root);
    }
    return root;
}

void avltakeinput(Node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = avlinsertIntoAVL(root, data);
        cin >> data;
    }
}

bool avlsearch(Node* root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x) {
        return true;
    }
    if (root->data > x) {
        return avlsearch(root->left, x);
    }
    return avlsearch(root->right, x);
}

void avltraverse_levelorder(Node* root) {
    if (root == NULL) {
        return;
    } else {
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
}

void avltraverse_preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    avltraverse_preorder(root->left);
    avltraverse_preorder(root->right);
}

void avltraverse_inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    avltraverse_inorder(root->left);
    cout << root->data << " ";
    avltraverse_inorder(root->right);
}

void avltraverse_postorder(Node* root) {
    if (root == NULL) {
        return;
    }
    avltraverse_postorder(root->left);
    avltraverse_postorder(root->right);
    cout << root->data << " ";
}
