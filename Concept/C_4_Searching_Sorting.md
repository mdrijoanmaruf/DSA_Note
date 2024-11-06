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

#### Linear Search Use Case :
- Unsorted data
- Small datasets
- Sequential search
- Finding the first occurrence

##### Example  :
```c++
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
```

### Binary Search :
Dividing the search interval in half, comparing the target value to the middle element, and adjusting the interval based on the comparison.

#### Binary Search Time Complexity :
* Best Case: O(1) - When the element being searched is in the middle of the array.
* Average Case: O(log n) - Binary search halves the search space in each step.
* Worst Case: O(log n)

#### Binary Search Space Complexity :
* O(1) : Because it only requires a constant amount of additional space for storing variables like indices and midpoints. It does not require extra space proportional to the input size.

#### Binary Search Use Case :
* Searching sorted arrays
##### Example :
```c++
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

#### Selection Sort Use Case :
* Small Dataset
##### Example :
```c++
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < (n-1); i++){
        int minIndex = i;

        for(int j = i+1; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}
```

### Bubble Sort :
A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
#### Bubble Sort Time Complexity :
* Best Case: O(n) - If the list is already sorted, bubble sort will make only one pass through the list to check that it's sorted.
* Average Case: O(n^2) - In the average case, bubble sort requires nested loops to compare and swap elements, leading to quadratic time complexity.
* Worst Case: O(n^2) - If the list is sorted in reverse order, bubble sort will require the maximum number of comparisons and swaps.

#### Bubble Sort Space Complexity :
*  O(1) : Because it only requires a constant amount of additional space for storing variables like loop counters and temporary variables for swaps. It does not require extra space proportional to the input size.

#### Bubble Sort Use Case :
- Small datasets
- Basic sorting needs
- Understanding sorting algorithms

##### Example :
```c++
// Function to perform bubble sort
void bubbleSort(vector<int>& arr, int n) {
    // Traverse through all array elements
    for(int i = 1; i < n; i++) {
        // Last i elements are already in place, so the inner loop will run from 0 to n-i-1
        for(int j = 0; j < n - i; j++) {
            // Swap if the element found is greater than the next element
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
```
##### More Optimized Example :
```c++
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n ; i++){
        // Make a bool varibale 
        int swaped = false;
        for(int j = 0; j < n - i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                // If the array is already sorted. It will not be true.
                swaped = true;
            }
        }
        // If this is false. So this array is sorted.
        if(swaped == false){
            break;
        }
    }
}
```

### Insertion Sort :
Insertion Sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

#### Insertion Sort Time Complexity :
* Best Case: O(n) - If the list is already sorted, insertion sort will make only n-1 comparisons and no swaps.
* Average Case: O(n^2) - In the average case, each insertion takes an average of n/2 comparisons and swaps.
* Worst Case: O(n^2) - If the list is sorted in reverse order, each insertion requires shifting all previously sorted elements.

#### Insertion Sort Space Complexity :
* O(1) - Insertion sort requires a constant amount of additional space for the key element and loop counters. It does not require extra space proportional to the input size.

#### Insertion Sort Use Case :
* Small datasets
* Partially sorted arrays
* Situations where simplicity is more important than performance

```c++
void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {  // Loop starts from index 1 (2nd element)
        int key = array[i];           // Set the key as the current element
        int j = i - 1;                // Initialize j as the previous element index
        
        // Shift elements of array[0...i-1] that are greater than key, to one position ahead
        while (j >= 0 && array[j] > key) { 
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;           // Insert key at the correct position
    }
}
```

### Merge Sort :
Merge Sort is an efficient, stable, and comparison-based sorting algorithm that follows the divide and conquer paradigm. It divides the input array into two halves, recursively sorts them, and then merges the sorted halves back together. Merge Sort is particularly useful for large datasets.

#### Merge Sort Time Complexity:
* **Best Case: O(n log n)** - Even if the array is already sorted, merge sort will always divide the array and merge the sorted halves.
* **Average Case: O(n log n)** - The time complexity remains consistent regardless of the initial order of elements.
* **Worst Case: O(n log n)** - Merge sort consistently performs well, even in the worst-case scenario.

#### Merge Sort Space Complexity:

* **O(n)** - Merge sort requires additional space for temporary arrays to hold the divided halves during merging. The space used is proportional to the size of the input array.

#### Merge Sort Use Case:

* Large datasets
* When stable sorting is required (maintaining the relative order of equal elements)
* Linked lists (since it doesn’t require random access)
* External sorting algorithms (sorting large files that don't fit into memory)

```c++

// Merge two sorted halves
void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Temp arrays for two halves
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values to first half
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    // Copy values to second half
    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge two halves into main array
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    } 
    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}
```

```c++
// Merge sort function
void mergeSort(int *arr, int s, int e) {
    if(s >= e) return;  // Base case

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);       // Sort left part
    mergeSort(arr, mid + 1, e);   // Sort right part
    merge(arr, s, e);             // Merge sorted parts
}
```


### Quick Sort :
Quick Sort is an efficient, in-place, comparison-based sorting algorithm that follows the divide and conquer paradigm. It selects a 'pivot' element from the array, partitions the other elements into two sub-arrays (one with elements less than the pivot and one with elements greater than the pivot), and then recursively sorts the sub-arrays. Quick Sort is often preferred for smaller, more localized datasets.

#### Quick Sort Time Complexity:

* **Best Case: O(n log n)** - When the pivot divides the array into two roughly equal halves at each step.
* **Average Case: O(n log n)** - The time complexity remains consistent on average, even with an arbitrary pivot choice.
* **Worst Case: O(n²)** - Occurs when the pivot consistently partitions the array into unbalanced sub-arrays (e.g., already sorted or reverse-sorted arrays without a median pivot).

#### Quick Sort Space Complexity:

* **O(log n)** - Quick Sort has a low memory overhead as it only requires a stack to hold recursive calls. It is an in-place sorting algorithm, so it does not require additional space for temporary arrays.

#### Quick Sort Use Case:

* When an in-place sorting algorithm is preferred (no extra memory required for temporary arrays)
* Small to medium datasets
* Situations where average-case performance is prioritized over worst-case performance
* Arrays rather than linked lists, as linked lists lack efficient random access

```c++
// Quicksort function
void quickSort(int arr[], int s, int e) {
    if(s >= e) return;  // Base case

    int p = partition(arr, s, e);  // Partition index
    quickSort(arr, s, p - 1);  // Sort left part
    quickSort(arr, p + 1, e);  // Sort right part
}
```

```c++
// Partition function for quicksort
int partition(int arr[], int s, int e) {
    int pivot = arr[s];  // Choose pivot
    int cnt = 0;

    // Count elements <= pivot
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] <= pivot) {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;  // Pivot's correct position
    swap(arr[pivotIndex], arr[s]);

    // Arrange elements around pivot
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;  // Return pivot position
}
```


### Counting Sort :
Counting Sort is a non-comparison-based sorting algorithm ideal for sorting integers within a specific range. It works by counting the occurrences of each unique element in the input array and then using this count to determine each element's position in the sorted array. Counting Sort is efficient with a time complexity of O(n + k), where n is the number of elements in the input array and k is the range of the input.

#### Counting Sort Time Complexity:

* **Best Case: O(n + k)** - Linear time complexity is achievable if the range of numbers (k) is not significantly larger than n.
* **Average Case: O(n + k)** - The time complexity remains O(n + k) on average, as it depends on counting and array manipulation rather than comparisons.
* **Worst Case: O(n + k)** - The time complexity will be O(n + k) even in the worst case, as it only requires scanning the input array and the count array.


#### Counting Sort Space Complexity:

* **O(n + k)** - Counting Sort requires additional space for storing the count of each unique element, resulting in an auxiliary array of size k.

#### Counting Sort Use Case:

* Situations where input elements have a limited range (e.g., integers within a small, known range).
* Ideal for sorting integers or objects with integer keys.
* Not suitable for floating-point numbers or data that requires comparisons.
* Often used in situations where stability is required, as Counting Sort is stable.
```c++
// Counting sort function
void countingSort(int arr[], int n, int maxVal) {
    // Create count array to store count of each element
    int count[maxVal + 1] = {0};  

    // Store count of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Modify count array to store cumulative count
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    // Output array to store sorted elements
    int output[n];

    // Place elements in their correct position in output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy sorted elements back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
```
