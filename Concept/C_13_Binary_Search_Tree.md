# Binary Search Tree

## Build Tree :
```c++
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
```
## Build Tree From Level Order :
The buildFromLevelOrder function constructs a binary tree by taking input level-by-level (breadth-first traversal). Starting from the root node, each node's left and right children are added based on user input. A queue is used to facilitate the level order construction, where:

* If the input is not -1, a new node is created and added to the left or right.
* If the input is -1, it signifies that the child is absent at that position.
```c++
#include <iostream>
#include <queue>
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

// Function to build a binary tree using level order traversal
void buildFromLevelOrder(Node* &root) {
    queue<Node*> q;

    // Input the root node data
    cout << "Enter data for root: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    
    // Start the queue with the root node
    q.push(root);

    // Iterate while the queue is not empty
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // Input and create the left child
        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        // Input and create the right child
        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

// Inorder traversal (Left, Root, Right)
void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder traversal (Root, Left, Right)
void preorder(Node* root) {
    if(root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal (Left, Right, Root)
void postorder(Node* root) {
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;

    // Build the tree from level order input
    buildFromLevelOrder(root);

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
```
