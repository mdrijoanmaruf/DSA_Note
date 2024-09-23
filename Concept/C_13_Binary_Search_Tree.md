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


## BST Add, Search, Delete
```c++
#include <iostream>
using namespace std;

// Node class definition for the BST
class Node {
    public:
        int data;
        Node* left;
        Node* right;

        // Constructor to create a new node
        Node(int value) {
            data = value;
            left = right = NULL;
        }
};

// Function to insert a node in the BST
Node* add(Node* root, int value) {
    // Base case: if the tree is empty, create a new node
    if (root == NULL) {
        return new Node(value);
    }

    // Recursively add the node to the left or right subtree
    if (value < root->data) {
        root->left = add(root->left, value);
    } else if (value > root->data) {
        root->right = add(root->right, value);
    }

    return root;  // Return the root node
}

// Function to search for a value in the BST
bool search(Node* root, int value) {
    // Base case: if the tree is empty or the value is found
    if (root == NULL) {
        return false;
    }
    if (root->data == value) {
        return true;
    }

    // Recursively search in the left or right subtree
    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function to find the minimum value node in a subtree
Node* findMin(Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node* deleteNode(Node* root, int value) {
    // Base case: if the tree is empty
    if (root == NULL) {
        return NULL;
    }

    // Recursively find the node to delete
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node to be deleted found

        // Case 1: Node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Node with two children
        Node* temp = findMin(root->right);  // Get the smallest value in the right subtree
        root->data = temp->data;  // Replace the current node's value with the inorder successor
        root->right = deleteNode(root->right, temp->data);  // Delete the inorder successor
    }

    return root;  // Return the modified root
}

// Inorder traversal to print the BST
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;

    // Inserting nodes into the BST
    root = add(root, 50);
    root = add(root, 30);
    root = add(root, 70);
    root = add(root, 20);
    root = add(root, 40);
    root = add(root, 60);
    root = add(root, 80);

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;

    // Searching for a value in the BST
    int searchValue = 40;
    if (search(root, searchValue)) {
        cout << searchValue << " found in the BST." << endl;
    } else {
        cout << searchValue << " not found in the BST." << endl;
    }

    // Deleting a node from the BST
    root = deleteNode(root, 70);
    cout << "Inorder traversal after deleting 70: ";
    inorder(root);
    cout << endl;

    return 0;
}
```
