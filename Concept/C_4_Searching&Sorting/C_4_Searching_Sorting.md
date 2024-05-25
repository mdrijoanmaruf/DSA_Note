# Searching & Sorting
## Searching :

### Linear Search :
Linear search is an algorithm that sequentially checks each element of a list until the target element is found or the list ends.
```c++
#include <iostream>
#include <vector>

using namespace std;

// Function to perform linear search
int linearSearch(const vector<int>& arr, int target) {
    // Iterate through each element in the array
    for (size_t i = 0; i < arr.size(); ++i) {
        // If the current element matches the target, return its index
        if (arr[i] == target) {
            return i;
        }
    }
    // If the target is not found, return -1
    return -1;
}

int main() {
    // Sample array to search in
    vector<int> data = {1, 3, 5, 7, 9, 11};

    // Target value to search for
    int target = 7;

    // Perform linear search
    int result = linearSearch(data, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

```

### Binary Search :
Dividing the search interval in half, comparing the target value to the middle element, and adjusting the interval based on the comparison.


```c++
// Find an element index in the sorted array :
#include <iostream>
using namespace std;

// Finding the key index in the sorted array
int findElementInSortedArray(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while (start <= end)
    {
        // Check the middle point is quals to key or not
        if (arr[mid] == key)
        {
            return mid;
        }
        
        // Moving right side
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // Movieng Left Side
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 5, 8, 9, 12, 15};
    int size = sizeof(arr)/sizeof(arr[0]);

    int check = findElementInSortedArray(arr , size , 15);
    cout << check << endl;
    
    return 0;
}
```

## Sorting :
### Selection Sort :


