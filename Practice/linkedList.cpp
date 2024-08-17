#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// Insert at the Head
void insertAtHead(Node* &head , int d){
    // New node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert at the Tail 
void insertAtTail(Node* &tail , int d){
    // New Node Create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Insert at the Middle
void insertAtPosition(Node* &head , int postion , int d){
    Node* temp = head;
    int count = 1;

    while(count < postion - 1){
        temp = temp->next;
        count++;
    }

    // Creating a node for new d
    Node* newNode = new Node(d);
    newNode->next = temp->next;

    temp->next = newNode;
}

// Print a Linked List
void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl; 

    // Head pointed o node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail , 12);
    insertAtTail(tail , 192);

    insertAtPosition(head , 2 , 666);
    print(head);
    return 0;
}