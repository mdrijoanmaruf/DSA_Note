#include <iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size = size;
        arr = new arr[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main() {
    Stack s(10);

   // impliment all functions

    return 0;
}