# Searching & Sorting
## Searching :

### Linear Search :
Linear search is an algorithm that sequentially checks each element of a list until the target element is found or the list ends.

#### Linear Search Time Complexity :
* Best Case: O(1) - If the target element is found at the beginning of the list.
* Average Case: O(n) - In the average case, linear search may need to check half of the elements on average.
* Worst Case: O(n) - If the target element is at the end of the list or not present in the list, linear search would have to iterate through all elements.
#### Linear Search Space Complexity :
* O(1) : Because it only requires a constant amount of additional space for storing variables like indices and loop counters. It does not require extra space proportional to the input size.
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

#### Binary Search Time Complexity :
* Best Case: O(1) - When the element being searched is in the middle of the array.
* Average Case: O(log n) - Binary search halves the search space in each step.
* Worst Case: O(log n)

#### Binary Search Space Complexity :
* O(1) : Because it only requires a constant amount of additional space for storing variables like indices and midpoints. It does not require extra space proportional to the input size.

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
Selection sort is a simple comparison-based sorting algorithm that repeatedly selects the smallest (or largest, depending on the order) element from the unsorted portion of the list and swaps it with the first unsorted element, moving the boundary between the sorted and unsorted sections of the list.

#### Selection Sort Time Complexity :
* Best Case : O(n^2)
* Worst Case : O(n^2)
* Avarage Case : O(n^2)

#### Selection Sort Space Complexity :
* O(1)
```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the index of the minimum element in a subarray
int findMinIndex(const vector<int>& arr, int start, int end) {
    int minIndex = start;
    for (int i = start + 1; i < end; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to perform selection sort on the array
void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Find the index of the minimum element in the remaining unsorted array
        int minIndex = findMinIndex(arr, i, n);
        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    // Initialize the array
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    
    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array using selection sort
    selectionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

