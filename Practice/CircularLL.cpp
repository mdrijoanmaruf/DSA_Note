#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor 
    ~Node(){
        if(this->next != NULL){
            cout << "Memory is free for node with data " << this->data << endl;
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node* &tail , int element , int data){

    // Emplty List
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
        return ;
    }

    // None Empty List
    Node* current = tail;
    while(current->data != element){
        current = current->next;
    }

    // After that Element found -> Current is representing element
    Node* temp = new Node(data);
    temp->next = current->next;
    current->next = temp;
}

void print(Node* tail){
    Node* temp = tail;

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);

    cout << endl;
}

void deleteNode(Node* &tail , int value){
    // Empty List :
    if(tail == NULL){
        cout << "List is Empty" << endl;
    }

    else{
        // assuming that "value" is present in teh LL
        Node* previous = tail;
        Node* current = previous->next;

        while(current->data != value){
            previous = current;
            current = current->next;
        }

        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main() {

    Node* tail = NULL;
    cout << "running" << endl;
    insertNode(tail , 4 , 3);
    insertNode(tail , 3 , 33);
    insertNode(tail , 33 , 37);
    insertNode(tail , 37 , 3);
    print(tail);

    deleteNode(tail , 37);
    print(tail);
    
    return 0;
}