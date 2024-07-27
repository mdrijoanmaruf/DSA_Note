# Array

```c++
int arr[10]; // Declearing an array
```

- Index start with zero.
- Return location of 0 index.

### Array initialization :

```c++
int arr[100] = {1};
// 0 index will 1, others will be zero.
```

```c++
int arr[20];
// Default assign garbase value of all index.
```

### Array size :

```c++
int arr[10];
int size = sizeof(arr) / sizeof(arr[0]);
// sizeof(arr) --> total space .
// devide sizeof(arr[0]). as like devided by sizeof(int).
```

### Array in Function :

**Note :** Array give the referene (starting address) to function. Not copy.

### Linear Search :

- Searching any element in the array.
- Searching any element one by one that's why it's name Linear Search.

#### Example :
```c++
#include<iostream>
using namespace std;

// Linear learch :
bool search(int arr[], int size, int element) {

    for( int i = 0; i<size; i++ ) {
        if( arr[i] == element) {
            return 1;
        }
    }
    return 0;
}


int main() {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout <<" Enter the element to search for " << endl;
    int element;
    cin >> element;

    bool found = search(arr, 10, element);

    if( found ) {
        cout <<"Element is present "<< endl;
    }
    else{
        cout <<"Element is absent " << endl;
    }
    return 0;
}
```


### Binary Search in 2D Array :

```c++
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Get the number of rows and columns in the matrix
        int row = matrix.size();
        int col = matrix[0].size();

        // Calculate the total number of elements in the matrix
        int total = row * col;

        // Initialize pointers for binary search
        int start = 0;  // Start index of the search range
        int end = total - 1;  // End index of the search range

        // Binary search loop
        while (start <= end) {
            // Calculate the mid index in the flattened view of the matrix
            int mid = start + (end - start) / 2;
            
            // Convert the mid index back to 2D matrix indices
            int element = matrix[mid / col][mid % col];

            // Check if the mid element is the target
            if (element == target) {
                return true;  // Target found
            }

            // If the mid element is less than the target, search in the right half
            else if (element < target) {
                start = mid + 1;
            }

            // If the mid element is greater than the target, search in the left half
            else {
                end = mid - 1;
            }
        }
        
        // If we exit the loop, the target was not found
        return false;
    }
};
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
