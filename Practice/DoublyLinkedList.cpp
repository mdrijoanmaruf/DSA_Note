#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* previous;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->previous = NULL;
    }

    ~Node(){
        cout << "Memory free for Node with Data " << this->data << endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
    
};


// Dubly Linked List Insert at head
void insertAtHead(Node* &head , int data){
    Node* newNode = new Node(data);

    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

// Printing Dubly Linked List :
void printDublyLL(Node* head){
    Node* temp = head;
    
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    
    cout << "NULL" << endl;
}

// Linked List Length finding
int linkedListLength(Node* head){
    Node* temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Insert at Tail in Dubly Linked List :
void insertAtTail(Node* &tail , int data){
    Node* newNode = new Node(data);

    tail->next = newNode;
    newNode->previous = tail;

    tail = newNode;
}

// Dubly Linked List Insert at any Position
// Function to insert a new node at a specific position in a doubly linked list
void insertAtMiddle(Node* &head, Node* &tail, int position, int data){
    // If inserting at the head (position 1)
    if(position == 1){
        insertAtHead(head, data); // Use existing function to insert at the head
        return;
    }

    Node* temp = head; // Start from the head of the list
    int count = 1; // Initialize a counter to track the current position

    // Traverse the list to reach the node just before the desired position
    while(count < position - 1){
        temp = temp->next;
        count++;
    }

    Node* newNode = new Node(data); // Create a new node with the given data

    // Set the pointers for the new node and adjust surrounding nodes
    newNode->next = temp->next; 
    if(temp->next != NULL) { // Check if we're not inserting at the tail
        temp->next->previous = newNode;
    }
    temp->next = newNode;
    newNode->previous = temp;

    // If inserting at the last position (after the last node)
    if(newNode->next == NULL){
        insertAtTail(tail, data); // Use existing function to insert at the tail
        return;
    }
}






// Delete dubly Linked List
void deleteDublyLinkedList(Node* &head , int position){

    // starting node delete
    if(position == 1){
        Node* temp = head;
        temp->next->previous = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{ // Deleting any middle or last position
        Node* currentNode = head;
        Node* previousNode = NULL;
        int count = 1;

        while(count < position){
            previousNode = currentNode; 
            currentNode = currentNode->next;
            count++;
        }

        currentNode->previous = NULL;
        previousNode->next = currentNode->next;
        currentNode->next = NULL;
        delete currentNode;
    }
}

int main() {
    Node* newNode = new Node(10);
    Node* head = newNode;
    Node* tail = newNode;

    insertAtHead(head , 20);
    insertAtHead(head , 40);

    insertAtTail(tail, 400);
    printDublyLL(head);

    insertAtMiddle(head, tail , 5, 12345);
    printDublyLL(head);

    deleteDublyLinkedList(head , 3);
    printDublyLL(head);
    return 0;
}