# STL
## Array :
```c++
# include<array>    // Import

// Creating Array :
array<int , 4> a = {1,2,3,4}; // Size --> 4

// Properties :
a.size();       // Return size;
a.at(2);        // Return element of index 2;
a.empty();      // Retrun 1 if it's empty;
a.front();      // Retrun 1st Element;
a.back();       // Return last Element;
```

## Vector :
```c++
#include<vector>    // Import

// Creating Vector :
vector<int> v;  // Createing vector v

// Properties :
v.capacity();   // Return Current Capacity;
v.push_back(2); // Add one in the 1st index; (next will be next index);
v.size();       // Return it's size. (Current Element);
v.front();      // Return 1st Element;
v.back();       // Return Last Element;
v.pop_back();   // Remove Last Element;
v.clear();      // Clear all element ; Size will be zero; But Capacity will not Change;


// Initialize with value :
vector<int> a(5,1);     // Size 5; initialize with 1 for all

// Copy Vector :
vector<int> b(a);       // All Element of a will be copy in b;
```