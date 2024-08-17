#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int data) {
        this->data = data;
        this->next = nullptr; // Initialize next pointer to nullptr
    }

    // Destructor 
    ~Node(){    // Distructor will call when use delete keyword
        // Memory Free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        // Print which memory free
        cout << "Memory is freee for Node with data " << this->data << endl;
    }
};

// Function to insert a node at the beginning (head)
// Passing head by reference so that the original head pointer can be updated
void insertAtHead(Node*& head, int data) {
    // Step 1: Create a new Node with the given data
    Node* temp = new Node(data);

    // Step 2: Link the new node to the current head node
    temp->next = head;

    // Step 3: Update the head pointer to point to the new node
    head = temp;
}

// Function to print the entire linked list
void printLinkedList(Node* head) {
    // Traverse the list until the end (nullptr)
    while (head != nullptr) {
        // Print the data of the current node
        cout << head->data << " -> ";

        // Move to the next node
        head = head->next;
    }
    // Indicate the end of the list
    cout << "NULL" << endl;
}

// Insert at Tail
void insertAtTail(Node* &tail , int data){
    // Create new node
    Node* newNode = new Node(data);

    tail->next = newNode;
    newNode->next = NULL;
    tail = newNode;
}

// Insert At the middle :
void insertAtMiddle(Node* &head , Node* &tail ,  int position , int data){

    // Insert at position 1 or head
    if(position == 1){
        insertAtHead(head , data);
        return ;
    }
    // Creating new node
    Node* newNode = new Node(data);
    Node* temp = head;

    // Creating count 
    int count = 1;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }

    // Insert at the last position
    if(temp->next == NULL){
        insertAtTail(tail , data);
    }

    newNode->next = temp->next;
    temp->next = newNode;

}

// Delete Node in a position 
void deleteAtPosition(Node* &head , int position){

    // Deleting 1st Or Head Node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // Free Memory
        temp->next = NULL;
        delete temp;
    }
    // Deleting Any Middle or Last Node
    else{
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main() {
    // Step 1: Create the first node
    Node* n1 = new Node(10);
    Node* tail = n1;
    // Initialize the head pointer to point to the first node
    Node* head = n1;

    // Step 2: Insert nodes at the beginning of the list
    insertAtHead(head, 20);
    insertAtHead(head, 45);
    insertAtHead(head, 56);
    insertAtHead(head, 78);

    // Step 3: Print the linked list

    insertAtTail(tail , 20);
    insertAtTail(tail , 23);

    insertAtMiddle(head , 2 , 1000);
    printLinkedList(head);

    return 0;
}

/*
Output:
78 -> 56 -> 45 -> 20 -> 10 -> NULL
*/
