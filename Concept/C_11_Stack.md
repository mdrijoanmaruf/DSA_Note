# Stack
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack will be the first one to be removed.

**Key Operations:**
* **Push**: Add an element to the top of the stack.
* **Pop**: Remove the top element of the stack.
* **Top/Peek**: Access the top element without removing it.
* **IsEmpty**: Check if the stack is empty.
* **Size**: Return the number of elements in the stack.
#### Stack Implementation using STL
```c++
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(10); // Stack: [10]
    s.push(20); // Stack: [10, 20]
    s.push(30); // Stack: [10, 20, 30]

    // Access the top element
    cout << "Top element: " << s.top() << endl; // Output: Top element: 30

    // Pop the top element
    s.pop(); // Stack after pop: [10, 20]

    // Size of the stack
    cout << "Stack size: " << s.size() << endl; // Output: Stack size: 2

    // Check if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty" << endl; // This won't be executed as the stack is not empty
    } else {
        cout << "Stack is not empty" << endl; // Output: Stack is not empty
    }

    return 0;
}
```



### Stack Implimantation by Class :
```c++
#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;  // Pointer to dynamically allocated array
    int top;   // Index of the top element in the stack
    int size;  // Maximum size of the stack

    // Constructor to initialize stack
    Stack(int size) {
        this->size = size;
        arr = new int[size]; // Allocate memory for the stack array
        top = -1;            // Initialize top to -1 indicating the stack is empty
    }

    // Push an element onto the stack
    void push(int element) {
        if (size - top > 1) {  // Check if there's space in the stack
            top++;             // Increment top
            arr[top] = element; // Add the element at the top position
        } else {
            cout << "Stack Overflow" << endl; // Stack is full, cannot push more elements
        }
    }

    // Pop the top element from the stack
    void pop() {
        if (top >= 0) {    // Check if the stack is not empty
            top--;         // Decrement top to remove the top element
        } else {
            cout << "Stack Underflow" << endl; // Stack is empty, cannot pop
        }
    }

    // Peek the top element of the stack
    int peek() {
        if (top >= 0) {    // Check if the stack is not empty
            return arr[top]; // Return the top element
        } else {
            cout << "Stack is Empty" << endl; // Stack is empty, nothing to peek
            return -1;        // Return -1 to indicate error (optional)
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;  // Return true if top is -1, indicating the stack is empty
    }
};

int main() {
    Stack s(10);  // Create a stack of size 10

    // Push elements onto the stack
    s.push(10);   // Push 10 onto the stack
    s.push(20);   // Push 20 onto the stack
    s.push(30);   // Push 30 onto the stack

    // Peek the top element
    cout << "Top element: " << s.peek() << endl; // Expected Output: 30

    // Pop the top element
    s.pop();    // Remove the top element
    cout << "Top element after pop: " << s.peek() << endl; // Expected Output: 20

    // Pop all elements to empty the stack
    s.pop();    // Remove the top element
    s.pop();    // Remove the top element, now the stack is empty

    // Check if the stack is empty
    if (s.isEmpty()) {
        cout << "Stack is empty now." << endl; // Expected Output: Stack is empty now.
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Try popping from an empty stack
    s.pop(); // Expected Output: Stack Underflow

    return 0;
}
```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




```c++

```




