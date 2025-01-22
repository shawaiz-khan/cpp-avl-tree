#include <iostream>
using namespace std;

class Node {
    int data;
    Node* right;
    Node* left;
    int height;

    public:
        Node(int val) {
            data = val;
            right = NULL;
            left = NULL;
            height = 1;
        }
}

Node* createNode(int val) {
    Node* newNode = new Node(val);
    return newNode;
}

int getHeight(Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        return node->height;
    }
}

int getBalanceFactor(Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        return getHeight(node->left) - getHeight(node->right);
    }
}

void updateHeight(Node* node) {
    if (node != NULL) {
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        if (leftHeight > rightHeight) {
            node->height = leftHeight + 1;
        } else {
            node->height = rightHeight + 1;
        }
    }
}

void insert(Node* root, int val) {
    if (root == NULL) {
        root = createNode(val);
        cout << val << " inserted at root" << endl;
    } else if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    } else {
        cout << "No Duplicates allowed";
        return root;
    }

    updateHeight(root);

    int balance = getBalanceFactor(root);
}

int main() {
    Node* root;
    root = NULL;

    insert(root, 10);
    return 0;
}