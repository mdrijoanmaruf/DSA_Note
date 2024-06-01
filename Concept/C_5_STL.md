# STL
## Array :
```c++
#include<array>    // Import

// Creating Array :
array<int, 4> a = {1, 2, 3, 4}; // Size --> 4

// Properties :
a.size();       // Return size;
a.at(2);        // Return element at index 2;
a.empty();      // Return 1 if it's empty, otherwise 0;
a.front();      // Return 1st element;
a.back();       // Return last element;
a.max_size();   // Return the maximum possible number of elements (same as size for std::array);

// Access elements :
a[1];           // Return element at index 1 using operator[];
int* p = a.data();  // Get a direct pointer to the underlying array

// Iterate through elements :
for(auto it = a.begin(); it != a.end(); ++it) {
    cout << *it << " "; // Print elements
}

// Using range-based for loop:
for(int val : a) {
    cout << val << " "; // Print elements
}

// Fill all elements with a specific value :
a.fill(0);       // Fill the array with 0

// Swap contents with another array :
array<int, 4> b = {5, 6, 7, 8};
a.swap(b);       // Swap contents of a and b

```
## Vector :
```c++
#include<vector>    // Import

// Creating Vector :
vector<int> v;  // Creating vector v

// Properties :
v.capacity();    // Return current capacity;
v.size();        // Return its size (number of elements);
v.empty();       // Return 1 if it's empty, otherwise 0;
v.front();       // Return 1st element;
v.back();        // Return last element;
v.max_size();    // Return the maximum possible number of elements;

// Modifiers :
v.push_back(2);  // Add an element at the end;
v.pop_back();    // Remove the last element;
v.clear();       // Clear all elements; size will be zero, but capacity will not change;
v.insert(v.begin() + 1, 3);  // Insert 3 at the second position;
v.erase(v.begin() + 1);      // Remove element at the second position;
v.resize(10);    // Change the number of elements to 10;
v.assign(7, 5);  // Assign 7 elements with the value 5;
v.swap(v2);      // Swap contents with another vector v2;
v.shrink_to_fit();  // Reduce capacity to fit size;

// Access elements :
v.at(2);         // Return element at index 2;
v[3];            // Return element at index 3 using operator[];

// Iterate through elements :
for(auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " "; // Print elements
}

// Initialize with values :
vector<int> a(5, 1);  // Size 5, initialize with 1 for all elements

// Copy Vector :
vector<int> b(a);     // All elements of a will be copied into b;

// Other useful member functions :
v.reserve(20);   // Increase capacity to at least 20;
v.data();        // Return a direct pointer to the memory array used internally by the vector to store its owned elements;

// Example: Loop through vector using range-based for loop
for(int val : v) {
    cout << val << " "; // Print elements
}
```


## Daque :
```c++
#include<deque>    // Import

// Creating Deque :
deque<int> d;  // Creating deque d

// Properties :
d.size();         // Return its size (number of elements);
d.empty();        // Return 1 if it's empty, otherwise 0;
d.front();        // Return 1st element;
d.back();         // Return last element;
d.max_size();     // Return the maximum possible number of elements;

// Modifiers :
d.push_back(2);   // Add an element at the end;
d.push_front(1);  // Add an element at the beginning;
d.pop_back();     // Remove the last element;
d.pop_front();    // Remove the first element;
d.clear();        // Clear all elements; size will be zero;
d.insert(d.begin() + 1, 3);  // Insert 3 at the second position;
d.erase(d.begin() + 1);      // Remove element at the second position;
d.resize(10);     // Change the number of elements to 10;
d.assign(7, 5);   // Assign 7 elements with the value 5;
d.swap(d2);       // Swap contents with another deque d2;

// Access elements :
d.at(2);          // Return element at index 2;
d[3];             // Return element at index 3 using operator[];

// Iterate through elements :
for(auto it = d.begin(); it != d.end(); ++it) {
    cout << *it << " "; // Print elements
}

// Initialize with values :
deque<int> a(5, 1);  // Size 5, initialize with 1 for all elements

// Copy Deque :
deque<int> b(a);     // All elements of a will be copied into b;

```

## List :
```c++
#include<list>    // Import

// Creating List :
list<int> l;  // Creating list l

// Properties :
l.size();        // Return its size (number of elements);
l.empty();       // Return 1 if it's empty, otherwise 0;
l.front();       // Return 1st element;
l.back();        // Return last element;
l.max_size();    // Return the maximum possible number of elements;

// Modifiers :
l.push_back(2);  // Add an element at the end;
l.push_front(1); // Add an element at the beginning;
l.pop_back();    // Remove the last element;
l.pop_front();   // Remove the first element;
l.clear();       // Clear all elements; size will be zero;
l.insert(++l.begin(), 3);  // Insert 3 at the second position;
l.erase(++l.begin());      // Remove element at the second position;
l.resize(10);    // Change the number of elements to 10;
l.assign(7, 5);  // Assign 7 elements with the value 5;
l.swap(l2);      // Swap contents with another list l2;
l.remove(5);     // Remove all elements with value 5;
l.unique();      // Remove consecutive duplicate elements;

// Access elements :
auto it = l.begin();  // Get an iterator to the first element
advance(it, 2);       // Advance iterator to the third element
int val = *it;        // Access the third element

// Iterate through elements :
for(auto it = l.begin(); it != l.end(); ++it) {
    cout << *it << " "; // Print elements
}

// Using range-based for loop:
for(int val : l) {
    cout << val << " "; // Print elements
}

// Initialize with values :
list<int> a(5, 1);  // Size 5, initialize with 1 for all elements

// Copy List :
list<int> b(a);     // All elements of a will be copied into b;

// Splice operations:
list<int> c = {10, 20, 30};
list<int> d = {40, 50, 60};
c.splice(c.end(), d); // Transfer elements from d to c at the end

// Sort and reverse:
c.sort();       // Sort the list
c.reverse();    // Reverse the list
```


## Stack :
```c++
#include<stack>    // Import

// Creating Stack :
stack<int> s;  // Creating stack s

// Properties :
s.size();        // Return its size (number of elements);
s.empty();       // Return 1 if it's empty, otherwise 0;
s.top();         // Return the top element;

// Modifiers :
s.push(2);       // Add an element to the top;
s.pop();         // Remove the top element;
s.emplace(3);    // Construct and add element to the top;
s.swap(s2);      // Swap contents with another stack s2;

// Example: Push elements and access top
s.push(1);
s.push(2);
cout << s.top(); // Output: 2

// Example: Pop elements
s.pop();
cout << s.top(); // Output: 1

// Example: Check if stack is empty
if(s.empty()) {
    cout << "Stack is empty";
} else {
    cout << "Stack is not empty";
}

// Initialize with values using another container (e.g., vector):
vector<int> v = {1, 2, 3, 4, 5};
stack<int, vector<int>> s(v);  // Stack s initialized with elements of vector v

// Iterate through elements (not directly supported, but can be done by popping elements):
while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
}
```
## Queue :
```c++
#include<queue>    // Import

// Creating Queue :
queue<int> q;  // Creating queue q

// Properties :
q.size();        // Return its size (number of elements);
q.empty();       // Return 1 if it's empty, otherwise 0;
q.front();       // Return the front element;
q.back();        // Return the back element;

// Modifiers :
q.push(2);       // Add an element to the back;
q.pop();         // Remove the front element;
q.emplace(3);    // Construct and add element to the back;
q.swap(q2);      // Swap contents with another queue q2;

// Example: Push elements and access front and back
q.push(1);
q.push(2);
cout << q.front(); // Output: 1
cout << q.back();  // Output: 2

// Example: Pop elements
q.pop();
cout << q.front(); // Output: 2

// Example: Check if queue is empty
if(q.empty()) {
    cout << "Queue is empty";
} else {
    cout << "Queue is not empty";
}

// Initialize with values using another container (e.g., deque):
deque<int> d = {1, 2, 3, 4, 5};
queue<int, deque<int>> q(d);  // Queue q initialized with elements of deque d

// Iterate through elements (not directly supported, but can be done by popping elements):
while(!q.empty()) {
    cout << q.front() << " ";
    q.pop();
}
```





## Priority Queue :
```c++
#include<queue>    // Import
#include<vector>   // Import for custom comparator (if needed)

// Creating Priority Queue :
priority_queue<int> pq;  // Creating max-heap priority queue pq

// Properties :
pq.size();        // Return its size (number of elements);
pq.empty();       // Return 1 if it's empty, otherwise 0;
pq.top();         // Return the top element;

// Modifiers :
pq.push(2);       // Add an element to the priority queue;
pq.pop();         // Remove the top element;
pq.emplace(3);    // Construct and add element to the priority queue;
pq.swap(pq2);     // Swap contents with another priority queue pq2;

// Example: Push elements and access top
pq.push(1);
pq.push(2);
cout << pq.top(); // Output: 2 (max element)

// Example: Pop elements
pq.pop();
cout << pq.top(); // Output: 1

// Example: Check if priority queue is empty
if(pq.empty()) {
    cout << "Priority queue is empty";
} else {
    cout << "Priority queue is not empty";
}

// Initialize with values using another container (e.g., vector):
vector<int> v = {1, 5, 3, 4, 2};
priority_queue<int> pq(v.begin(), v.end());  // Initialize pq with elements of vector v

// Custom comparator for min-heap:
priority_queue<int, vector<int>, greater<int>> min_pq;  // Creating min-heap priority queue
min_pq.push(3);
min_pq.push(1);
min_pq.push(2);
cout << min_pq.top(); // Output: 1 (min element)

// Iterate through elements (not directly supported, but can be done by popping elements):
while(!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
}

// Initialize with custom comparator and values:
auto compare = [](int a, int b) { return a > b; };  // Custom comparator for min-heap
priority_queue<int, vector<int>, decltype(compare)> custom_pq(compare);
custom_pq.push(3);
custom_pq.push(1);
custom_pq.push(2);
cout << custom_pq.top(); // Output: 1 (min element)
```



## Set :
```c++
#include<set>    // Import

// Creating Set :
set<int> s;  // Creating an empty set of integers

// Properties :
s.size();          // Return its size (number of elements);
s.empty();         // Return 1 if it's empty, otherwise 0;
s.max_size();      // Return the maximum possible number of elements;

// Modifiers :
s.insert(2);       // Add an element to the set;
s.erase(2);        // Remove an element from the set by value;
s.clear();         // Clear all elements; size will be zero;
s.swap(s2);        // Swap contents with another set s2;
s.emplace(3);      // Construct and add element to the set;

// Access elements :
auto it = s.find(2);  // Get an iterator to the element with value 2
if(it != s.end()) {
    cout << "Element found";
} else {
    cout << "Element not found";
}

// Example: Insert elements and check presence
s.insert(1);
s.insert(2);
if(s.find(2) != s.end()) {
    cout << "2 is in the set";
}

// Example: Erase element
s.erase(1);
if(s.find(1) == s.end()) {
    cout << "1 is not in the set";
}

// Iterate through elements :
for(auto it = s.begin(); it != s.end(); ++it) {
    cout << *it << " "; // Print elements
}

// Using range-based for loop:
for(int val : s) {
    cout << val << " "; // Print elements
}

// Initialize with values :
set<int> s = {1, 2, 3, 4, 5};  // Initialize set with values

// Copy Set :
set<int> s2(s);     // All elements of s will be copied into s2;

// Set Operations:
set<int> s1 = {1, 2, 3};
set<int> s2 = {3, 4, 5};

// Union:
set<int> s_union;
set_union.insert(s1.begin(), s1.end());
set_union.insert(s2.begin(), s2.end());

// Intersection:
set<int> s_intersection;
for(auto val : s1) {
    if(s2.find(val) != s2.end()) {
        s_intersection.insert(val);
    }
}

// Difference:
set<int> s_difference;
for(auto val : s1) {
    if(s2.find(val) == s2.end()) {
        s_difference.insert(val);
    }
}

// Example: Printing union, intersection, and difference
for(int val : s_union) {
    cout << val << " "; // Print union elements
}
for(int val : s_intersection) {
    cout << val << " "; // Print intersection elements
}
for(int val : s_difference) {
    cout << val << " "; // Print difference elements
}
```



## Map :
```c++
#include<map>    // Import

// Creating Map :
map<int, int> m;  // Creating an empty map with integer keys and integer values

// Properties :
m.size();           // Return its size (number of key-value pairs);
m.empty();          // Return 1 if it's empty, otherwise 0;
m.max_size();       // Return the maximum possible number of elements;

// Modifiers :
m.insert({1, 2});   // Add a key-value pair;
m[3] = 4;           // Add or update a key-value pair;
m.erase(1);         // Remove element by key;
m.clear();          // Clear all elements; size will be zero;
m.swap(m2);         // Swap contents with another map m2;
m.emplace(5, 6);    // Construct and add element to the map;

// Access elements :
cout << m[3];       // Access value by key (adds key with default value if not found);
auto it = m.find(2); // Get an iterator to the element with key 2
if(it != m.end()) {
    cout << "Element found: " << it->second;
} else {
    cout << "Element not found";
}

// Example: Insert elements and access values
m.insert({1, 2});
m[3] = 4;
cout << m[1];       // Output: 2
cout << m[3];       // Output: 4

// Example: Check presence and erase element
if(m.find(1) != m.end()) {
    cout << "1 is in the map";
    m.erase(1);
}
if(m.find(1) == m.end()) {
    cout << "1 is not in the map";
}

// Iterate through elements :
for(auto it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " -> " << it->second << " "; // Print key-value pairs
}

// Using range-based for loop:
for(auto& kv : m) {
    cout << kv.first << " -> " << kv.second << " "; // Print key-value pairs
}

// Initialize with values :
map<int, int> m = {{1, 2}, {3, 4}, {5, 6}};  // Initialize map with values

// Copy Map :
map<int, int> m2(m);     // All elements of m will be copied into m2;

// Custom Comparator:
struct customCompare {
    bool operator()(const int& lhs, const int& rhs) const {
        return lhs > rhs; // Example: Reverse order
    }
};
map<int, int, customCompare> custom_map;
custom_map[1] = 2;
custom_map[3] = 4;

// Example: Printing map with custom comparator
for(auto& kv : custom_map) {
    cout << kv.first << " -> " << kv.second << " "; // Print key-value pairs in custom order
}

// Additional useful functions:
m.count(3);         // Return 1 if key 3 is in the map, otherwise 0;
m.lower_bound(2);   // Return iterator to the first element not less than the given key;
m.upper_bound(2);   // Return iterator to the first element greater than the given key;
m.equal_range(2);   // Return range of elements matching the given key;
```


## STL Algorithms :

### Binary Search :
```c++
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    // Example data
    vector<int> v = {1, 2, 3, 4, 5};

    // Binary Search:
    bool found = binary_search(v.begin(), v.end(), 3); // Check if 3 exists in the vector
    if (found) {
        cout << "3 is in the vector." << endl; // If found, print this message
    } else {
        cout << "3 is not in the vector." << endl; // If not found, print this message
    }

    return 0;
}

```




### Lower Bound :
```c++
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    // Example data
    vector<int> v = {1, 2, 3, 4, 5};

    // Lower Bound:
    auto lower = lower_bound(v.begin(), v.end(), 3); // Find the first position where 3 can be inserted to maintain sorted order
    cout << "Lower bound for 3 is at position: " << (lower - v.begin()) << endl; // Print the position of lower bound for 3

    return 0;
}
```




### Upper Bound :
```c++
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    // Example data
    vector<int> v = {1, 2, 3, 4, 5};

    // Upper Bound:
    auto upper = upper_bound(v.begin(), v.end(), 3); // Find the first position where 3 can be inserted to maintain sorted order, after the last occurrence of 3
    cout << "Upper bound for 3 is at position: " << (upper - v.begin()) << endl; // Print the position of upper bound for 3

    return 0;
}
```




### Max :
```c++
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    // Example values
    int a = 10, b = 20;

    // Max:
    int max_val = max(a, b); // Return the maximum of a and b
    cout << "Max value is: " << max_val << endl; // Print the maximum value

    return 0;
}
```




### Min :
```c++
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    // Example values
    int a = 10, b = 20;

    // Min:
    int min_val = min(a, b); // Return the minimum of a and b
    cout << "Min value is: " << min_val << endl; // Print the minimum value

    return 0;
}
```




### Swap :
```c++
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    // Example values
    int x = 5, y = 10;

    // Swap:
    swap(x, y); // Swap values of x and y
    cout << "x: " << x << ", y: " << y << endl; // Output the swapped values of x and y; should print x: 10, y: 5

    return 0;
}
```




### Reverse :
```c++
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    // Example data
    vector<int> v = {1, 2, 3, 4, 5};

    // Reverse:
    reverse(v.begin(), v.end()); // Reverse the elements in the vector
    for (int n : v) {
        cout << n << " "; // Print each element in the reversed vector; should output: 5 4 3 2 1
    }
    cout << endl; // Print a new line at the end

    return 0;
}
```




### Rotate :
```c++
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    // Example data
    vector<int> v = {1, 2, 3, 4, 5};

    // Rotate:
    rotate(v.begin(), v.begin() + 2, v.end()); // Rotate elements, bringing the element at position 2 to the front
    for (int n : v) {
        cout << n << " "; // Print each element in the rotated vector; should output: 3 4 5 1 2
    }
    cout << endl; // Print a new line at the end

    return 0;
}
```



