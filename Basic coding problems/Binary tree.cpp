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

// Function to get the height of a node
int getHeight(Node* root) {
    return root ? root->height : 0;
}

// Function to get the balance factor of a node
int getBalanceFactor(Node* node) {
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

// Function to update the height of a node
void updateHeight(Node* node) {
    if (node) {
        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    }
}

// Right rotate
Node* rightRotate(Node* y) {
    Node* x = y->left;
    y->left = x->right;
    x->right = y;

    // Update heights
    updateHeight(y);
    updateHeight(x);

    return x;
}

// Left rotate
Node* leftRotate(Node* x) {
    Node* y = x->right;
    x->right = y->left;
    y->left = x;

    // Update heights
    updateHeight(x);
    updateHeight(y);

    return y; // New root
}

// Function to balance the tree at a given node
Node* balance(Node* node) {
    // Update height of the current node
    updateHeight(node);

    // Get the balance factor to check for unbalancing
    int balanceFactor = getBalanceFactor(node);

    // Perform rotations to balance the tree
    // Left Left Case
    if (balanceFactor > 1 && getBalanceFactor(node->left) >= 0) {
        return rightRotate(node);
    }
    // Left Right Case
    if (balanceFactor > 1 && getBalanceFactor(node->left) < 0) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Right Case
    if (balanceFactor < -1 && getBalanceFactor(node->right) <= 0) {
        return leftRotate(node);
    }
    // Right Left Case
    if (balanceFactor < -1 && getBalanceFactor(node->right) > 0) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node; // Return the balanced node
}

// Insert into the AVL tree
Node* insertIntoAVL(Node* root, int d) {
    if (root == NULL) {
        return new Node(d);
    }
    if (d < root->data) {
        root->left = insertIntoAVL(root->left, d);
    } else if (d > root->data) {
        root->right = insertIntoAVL(root->right, d);
    } else {
        // Duplicate data not allowed in AVL Tree
        return root;
    }

    // Balance the tree
    return balance(root);
}

// Function to find the minimum value node in a given subtree
Node* mini(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Delete a node from the AVL tree
Node* deletenode(Node* root, int d) {
    if (root == NULL) {
        return root; // Node not found
    }

    // If the current node is the node to be deleted
    if (root->data == d) {
        // Case 1: Node with no child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        // Case 2: Node with one child
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
        // Case 3: Node with two children
        else {
            Node* temp = mini(root->right); // Get the inorder successor
            root->data = temp->data; // Replace the data
            root->right = deletenode(root->right, temp->data); // Delete the inorder successor
        }
    } else if (root->data > d) {
        root->left = deletenode(root->left, d);
    } else {
        root->right = deletenode(root->right, d);
    }

    // Balance the tree
    return balance(root);
}

void takeinput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoAVL(root, data);
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

void traverse_levelorder(Node* root) {
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

int main() {
    Node* root = NULL;
    cout << "Enter data for AVL Tree (enter -1 to stop):" << endl;
    takeinput(root);

    cout << "Levelorder Traversal of the AVL Tree:" << endl;
    traverse_levelorder(root);

    return 0;
}

