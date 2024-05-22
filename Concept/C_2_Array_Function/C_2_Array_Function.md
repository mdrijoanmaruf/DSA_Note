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
