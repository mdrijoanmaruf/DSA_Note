#include <iostream>
using namespace std;

// Node class definition representing a single node in the tree
class Node {
    public:
        int data;
        Node* left;
        Node* right;

        // Constructor to initialize a new node with given data and null children
        Node(int d) {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

// Function to build a binary tree by taking user input recursively
Node* buildTree(Node* root) {
    cout << "Enter the data (enter 0 to stop): " << endl;
    int data;
    cin >> data;

    // If the input is 0, return NULL to indicate no node
    if(data == 0) {
        return NULL;
    }

    // Create a new node with the given data
    root = new Node(data);    

    // Recursively build the left subtree
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    // Recursively build the right subtree
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// Inorder traversal (Left, Root, Right)
void inorder(Node* root) {
    // Base case: if the node is NULL, return
    if(root == NULL) {
        return;
    }

    inorder(root->left);  // Traverse the left subtree
    cout << root->data << " ";  // Visit the root node
    inorder(root->right);  // Traverse the right subtree
}

// Preorder traversal (Root, Left, Right)
void preorder(Node* root) {
    // Base case: if the node is NULL, return
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";  // Visit the root node
    preorder(root->left);  // Traverse the left subtree
    preorder(root->right);  // Traverse the right subtree
}

// Postorder traversal (Left, Right, Root)
void postorder(Node* root) {
    // Base case: if the node is NULL, return
    if(root == NULL) {
        return;
    }

    postorder(root->left);  // Traverse the left subtree
    postorder(root->right);  // Traverse the right subtree
    cout << root->data << " ";  // Visit the root node
}

int main() {
    Node* root = NULL;

    // Building the tree
    root = buildTree(root);

    // Inorder traversal
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    // Preorder traversal
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    // Postorder traversal
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}


