# Queue : 
A queue is a linear data structure that follows the First In, First Out (FIFO) principle. This means that the first element added to the queue will be the first one to be removed.

### Key Operations:

* **Enqueue**: Add an element to the back of the queue.
* **Dequeue**: Remove the front element from the queue.
* **Front/Peek**: Access the front element without removing it.
* **IsEmpty**: Check if the queue is empty.
* **Size**: Return the number of elements in the queue.

### Queue Implementation using STL
```c++
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    // Enqueue elements into the queue
    q.push(10); // Queue: [10]
    q.push(20); // Queue: [10, 20]
    q.push(30); // Queue: [10, 20, 30]

    // Access the front element
    cout << "Front element: " << q.front() << endl; // Output: Front element: 10

    // Dequeue the front element
    q.pop(); // Queue after dequeue: [20, 30]

    // Size of the queue
    cout << "Queue size: " << q.size() << endl; // Output: Queue size: 2

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty" << endl; // This won't be executed as the queue is not empty
    } else {
        cout << "Queue is not empty" << endl; // Output: Queue is not empty
    }

    return 0;
}
```


### Queue Implementation using Class

```c++
#include <iostream>
using namespace std;

class Queue {
public:
    int *arr;  // Pointer to dynamically allocated array
    int front; // Index of the front element
    int rear;  // Index of the rear element
    int size;  // Maximum size of the queue
    int count; // Number of elements in the queue

    // Constructor to initialize queue
    Queue(int size) {
        this->size = size;
        arr = new int[size]; // Allocate memory for the queue array
        front = 0;           // Initialize front to 0
        rear = -1;           // Initialize rear to -1 indicating the queue is empty
        count = 0;           // Initialize count to 0
    }

    // Enqueue an element into the queue
    void enqueue(int element) {
        if (count < size) {  // Check if there's space in the queue
            rear = (rear + 1) % size; // Circular increment of rear
            arr[rear] = element;      // Add the element at the rear position
            count++;                  // Increment count
        } else {
            cout << "Queue Overflow" << endl; // Queue is full, cannot enqueue more elements
        }
    }

    // Dequeue the front element from the queue
    void dequeue() {
        if (count > 0) {   // Check if the queue is not empty
            front = (front + 1) % size; // Circular increment of front
            count--;                    // Decrement count
        } else {
            cout << "Queue Underflow" << endl; // Queue is empty, cannot dequeue
        }
    }

    // Peek the front element of the queue
    int peek() {
        if (count > 0) {   // Check if the queue is not empty
            return arr[front]; // Return the front element
        } else {
            cout << "Queue is Empty" << endl; // Queue is empty, nothing to peek
            return -1;        // Return -1 to indicate error (optional)
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return count == 0;  // Return true if count is 0, indicating the queue is empty
    }

    // Return the current size of the queue
    int sizeOfQueue() {
        return count;       // Return the number of elements in the queue
    }
};

int main() {
    Queue q(5);  // Create a queue of size 5

    // Enqueue elements into the queue
    q.enqueue(10);   // Enqueue 10
    q.enqueue(20);   // Enqueue 20
    q.enqueue(30);   // Enqueue 30

    // Peek the front element
    cout << "Front element: " << q.peek() << endl; // Expected Output: 10

    // Dequeue the front element
    q.dequeue();    // Remove the front element
    cout << "Front element after dequeue: " << q.peek() << endl; // Expected Output: 20

    // Dequeue all elements to empty the queue
    q.dequeue();    // Remove the front element
    q.dequeue();    // Remove the front element, now the queue is empty

    // Check if the queue is empty
    if (q.isEmpty()) {
        cout << "Queue is empty now." << endl; // Expected Output: Queue is empty now.
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Try dequeuing from an empty queue
    q.dequeue(); // Expected Output: Queue Underflow

    return 0;
}
```
## 
```c++

```
## 
```c++

```
## 
```c++

```
## 
```c++

```
## 
```c++

```
## 
```c++

```