# Time Complexity & Space Complexity

## Time Complexity : 
* Is the amount of time taken by an alogorithm to run.
* We find time complexity as a function of length of the input.

### Why need Time Complexity :
* For making better program.
* For comparision of algorithm.

### Time Complexity Notation :
* Big O Notation
* Theta Θ Notation
* Omega Ω Notation

## Big O Notation :
#### Constant time : O(1)
```c++
// This will run constant time.
for (int i = 0; i < 10; ++i) {
    sum += 1; // Adding 1 to sum is an O(1) operation
}
```

#### Linear Time : O(n)
```c++
int n = 10; // Upper limit
int sum = 0;

// This loop runs 'n' times, so the time complexity is O(n)
for (int i = 0; i <= n; ++i) {
    sum += i; // Each addition is an O(1) operation
}
```


#### Logarithmic Time : O(log n)

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
        
        // Check the key side
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // Check the key side
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


#### Quadratic Time : O(n^2)
```c++
int n = 5; // Size of the array
int sum = 0;

// This nested loop runs 'n * n' times, so the time complexity is O(n^2)
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
        sum += 1; // Each addition is an O(1) operation
    }
}

cout << "Sum: " << sum << endl;
```


#### Qubic Time : O(n^3)
```c++
int n = 3; // Size of the array
int sum = 0;

// This nested loop runs 'n * n * n' times, so the time complexity is O(n^3)
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
            sum += 1; // Each addition is an O(1) operation
        }
    }
}

cout << "Sum: " << sum << endl;
```


### The table of Time Complexity Max to Min :
* O(n!)
* O(n^n)
* O(n^3)
* O(n^2)
* O(n Log n)
* O(n)
* O(Log n)
* O(1)

**Note :** If any algorithm have 2 complixitye. The big one will count.


```c++
// Recursive Time complexity will be added hear
```


## Space Complexity :
#### O(1) : For Fixed Size
#### O(n) : For n Length Array
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



