# Dynamic Memory Allocation 




### Dynamic Memory Allocate :
```c++
char * ch = new char;   // Creating a variable in Heap Memory.
delete ch;              // Free the memeory for ch
int * arr = new int[5]; // Creating a array in heap Memory.
delete [] arr;          // Free the memory for arr array.
```
![alt text][def]

**Let's take a example :**
```c++
int n;
cin >> n;
int arr[n]; // This is Bad practice.  
```

**We have to use Dynamic Memory Allocation :**
```c++
int n;
cin >> n;
int * arr = new int[n]; // This is the good way.
```



**2D Dynamic Array :**
```c++
cout << "Enter Row and Column : " ;
int row , col;
cin >> row >> col;

int ** arr = new int*[row];

// Create a 2D Dynamic Array :
for(int i = 0; i < row; i++){
    arr[i] = new int[col];
}

// Taking input :
cout << "Enter Array :" << endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; col < m; j++)
    {
        cin >> arr[i][j];
    }
    cout << endl;
}

// Print Array :
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```
After completing work with Dynamic array wer have to frer the memory 

```c++
// Releasing Memory :
for(int i = 0; i < n ; i++){
    delete [] arr[i];   // Deleting inner array
}

delete [] arr;          // Deleting outer array;
```

## Macro :
* A piece of code in a program that is replaced by value of macro.
* When program will compailed the macro variable will repalce with the value. So, the macro variable will not use any memory.
* Macro value cannot be modified.
* Defined with #define 'name' 'value'
* Don't need any semicolon.
```c++
#include <iostream>
using namespace std;
#define PI 3.1416   // This not a variable but act like a variable.
int main() {
    int r = 5;
    double area = PI * r * r;   // Complile time PI will replace with 3.1416
    cout << "Area is : " << area << endl;
    return 0;
}
```



## Global Variable :
Any variable out of block is global variable.
```c++
#include <iostream>
using namespace std;

int g = 1000;   // Global variable : not inside any scope

int main() {
    int a = 10; // Local of main function scope.

    if(a < 100){
        int x = 100;    // Local variable of if
    }
    return 0;
}
```



## Inline function :
* Inline function used to reduce the function call overhead.
* As like Macro; where called this inline function the function body will replashed here in compile time.
* Inline function must be in 1 line not greater than 2 line.
* It's benifite : no extra memory uses for function and no extra time uses.

* In short : **Function call will replace with function body.**
```c++
#include <iostream>
using namespace std;

inline int getMax(int a , int b){
    return (a > b) ? a : b;
}

int main() {
    int a = 1; int b = 2;
    int ans = 0;

    ans = getMax(a , b); // In compile time getMax will repalce with (a > b) ? a : b;

    cout << "Max is : " << ans << endl;
    return 0;
}
```



## Default Arguments :
* Any function argument with defult value is Default Argument.
* When the function will call, user can give the argument or skipe the argument.
* Default arguemnt is always place in the right most.
```c++
#include <iostream>
using namespace std;

void printArr(int arr[] , int size , int start = 0){    // Here , start is a defult argument. start = 0;
    for(int i = start; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {2,3,4,6,2};
    int size = 5;

    printArr(arr , size , 2);   // 4 6 2

    printArr(arr , size);   // Here is default argument = 0
                            // so, print : 2 3 4 6 2
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






[def]: image.png