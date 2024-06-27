# Data Structure AIUB Slides
## Data & Structures :
#### Data :
* Row of information than can be processed to get results.

#### Structure :
* Some elementory items constitute a unit and that unit may be considered as a structure.
* A structure may be treated as a frame where we organise some elementory intems in different ways.

#### Data Structure :
* Data structure is a sturcture where we organize elementory data items in different ways and there exits structural amon the items so that it can be used efficiently.
* In other words , a data sturcture is means of sturctural relationship of elementory data itmes for storing retrieving data in computer's memory.

#### Elements of a Data Structure :
* Usually elementory data items are the elements of a Data Structure.
* Types of data items : char , int , float etc
* A Data Structure may be an element of another data structure. That means a data structure may contain another data structure. For exmaple : Array , Structure , Stact etc.
* Study Data Structure in two ways :
    * **Basic :** Habing a concrete implementation . Example : Variable , Pointer, Array etc.
    * **Abstact Data Types(ADTs) :** ADTs are entities that are difination of data and operation but do not have any concrete implementation. Example : List , Stack , Queue etc.

### Operation on Data Structures :
#### Basic :
* Insertion (addition fo a new element in the data structure)
* Deletion (removal of the element from the data structure)
* Traversal (accessing data elements in the data structure)

#### Additional :
* Searching (Loacation a certain element in the data structure)
* Sorting (Arranging elements in a data structure in a simplifiead order)
* Merging (Combining element of two simlar data structure) etc.

### Algorithm :
* Set of instructions that can be followed to perform a task. In other words, sequence of steps that can be followed to solve a problem.
* Each and every algorithm can be divided into three sections :
    * **Inplut :**  Where we show which data elements are to be given or fed to the algorithm as in input.
    * **Operational or Processing section :** Here we have to do all necessary operation , such as computation , taking decision , calling other procedures(or algorithms) etc.
    * **Output :** Where we display or get the result with the help of input and processing.

### Program :
* Secuence of **insturctions of any programming language** that can be followed to perform **a particular task.**
* Like an algorithm , generally a program has three sections as **Input** , **Processing** , **Output**.
* For particular problem (usually for a complex problem) , at first we may write an algorithm. Later , the algorithm amy be corverted into a program.
* In a program usually we use a large ammount of data. Most of case these data are not elementory items, where exists structural reletionship between elementory data items.
    * That means the program uses data structures.


### Data Storage Concept
#### Variable :
* A variable is a storage locatioin an associated symbolic name (an identifier) which contains some known or unknown quantity or information , a value.
* The variable name is the usual way to reference the stored value; this separation of name and content allows the name to be used independently of the axact information it represents.
* The identifier in computer source code can be bound to a value during run time, and the value of the variable may thus change during the course of program execution.
* In computing , a variable may be employed in a repetitive process : assigned a value in one place , than used elsewhere , then reassigned a new value and used again in the same way.
* Compilers have to replace variable's symbolic names with the actual loactions of the data in the memeory.

#### Memory Management :
* A variable in an memory that has been given a name.
* The computer access it's own memory not by using variable names but by using a memeory map with each location of memory uniquely defined by a number , called the address of that memory loaction.
* To access the memory of a variable the program uses the & operator. For Example : &x returns the address of a variable x.
```c++
int x = 10;
cout << x << endl;      // int value 
cout << &x << endl;     // address of x
```
## Array [1 - Dimenstional]
* An array can hole a **series of elements** of the **same type** placed in contiguous memeory locations.
* Each of these elements can be individually referenced by using index to unique identifier.
* In other words , array are a conveninent way of grouping a lot of values of same type under a single variable name.

#### Declearation :
* Like a regular variable , an array must be declared before it is used. A typical declaration for an array in C++ is :
```c++
// type name [total_number_of_element];
int arr[10];
```

#### Initialization :
* Array elements will not be initialized to any value by default, so their content will be undeterminded until we store some value in them. The elements of global and static array are automatically initialized with their default values, zeros.
* We can initialize as like :

```c++
int arr[5] = {16 , 2 , 77 , 40 , 138};
// index       0   1   2    3     4
```
The number of value in { } must not be larger than the number of element in [ ]

* We can initalize char arry by stirng :
```c++
int arr = ['a' , 'e' , 'i' , 'o' , 'u' , '\0'];    // char arry
string arr2 = "aeiou";  // will work as like arr
```


#### Access :
* We can access value as like : arrayName[index]

#### Searching an element in Array : (Linear Search)
```c++
int mimo[10] = {32,4,5,12,5,54,6,23,3,5}; // declaration of a new array
int n;
cout<<“Enter the number to be searched: “<<endl;
cin>>n; // inputting the number to be searched in the array
for(int i=0; i<10; i++){ // searching begins
	if (n == mimo[i]){
	  break; // searching ends
	}
 }
 cout<< n << "Was found in index "<< i << " of the array." << endl;
```



#### Array Insertion - Static array :
```c++
void insertAt(int arr[], int& size, int max_size, int element, int position) {
    // Check if there's room in the array
    if (size >= max_size) {
        cout << "Array is full, cannot insert new element." << endl;
        return;
    }

    // Check if the position is within bounds
    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the right to make room for the new element
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;

    // Increase the size
    ++size;
}
```



#### Array Insertion - Dynamic Array :
```c++
void insertAt(vector<int>& vec, int element, int position) {
    // Check if the position is within bounds
    if (position < 0 || position > vec.size()) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Use the insert method to insert the element
    vec.insert(vec.begin() + position, element);
}
```

#### Array Deletion - Static Array
```c++
void deleteAt(int arr[], int& size, int position) {
    // Check if the position is within bounds
    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size
    --size;
}
```


#### Array Deletion - Dynamic Array
```c++
void deleteAt(vector<int>& vec, int position) {
    // Check if the position is within bounds
    if (position < 0 || position >= vec.size()) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Use the erase method to remove the element
    vec.erase(vec.begin() + position);
}
```



## Array [2 - Dimensional]
* 2D arrays can be decribed as "Arrays of arrays". It can be imagined as Matrix.
```c++
int matrix[3][4] = {    // row 3, column 4
        {1, 2, 3, 4},   // row index 0
        {5, 6, 7, 8},   
        {9, 10, 11, 12}
        };
```
* 1st Dimension is considered as row and the 2nd Dimension is column. Hear, We have 3 row , 4 column.


#### Initialization :
* Declearation 2D array can be one of the following ways :
```c++
int arr[3][5] = {1,2,3,4,5,2,4,6,8,10,3,6,9,12,15};
int arr[3][5] = {{1,2,3,4,5},{2,4,6,8,10},{3,6,9,12,15}};
int arr[3][5] =  {
  {1,2,3,4,5},
  {2,4,6,8,10},
  {3,6,9,12,15}
};
```
* The internal braces are unnecessary , but helps to distinguish the rows from the columns. 

* Take care to include the semicolon at the end of the curly brace which closses the assignment.

* If there are not enough element in the curly braces to account for every single element in an array , the remaining elements will be filled out with garbage/zeros.

* Static and global variables are always guaranteed to be initialized to zero anyway , whereas auto or local varibales are guaranteed to be garbage.

#### 2D Array Input :
```c++
int row = 3, col = 4;
int arr[row][col];
for (int i = 0; i < row; i++)                 
{
    for (int j = 0; j < col; j++)
    {
        cin >> arr[i][j]; 
    }   
}
```

#### 2D Arry Output :
```c++
int row = 3, col = 4;
int arr[row][col];
for (int i = 0; i < row; i++)                 
{
    for (int j = 0; j < col; j++)
    {
        cout << arr[i][j] << " " << endl; 
    }   
    cout << endl;
}
```

#### 2D Array Memory Access :
* As memory is flat, in 2D array the values actually stored sequentially in the memory (just like 1D array). 
* Memory of each element of an array can be accessed using the & Operator. Ex : &arr[2] --> address of index 2 element.
* If the element is more than a byte. It gives the starting byte of the element.
* The name of an array alway refer to the starting location of the array. so , arr == arr[0]

* For any array arr[r][c];
    * arr[i] = &arr[i][0]; represents the starting address of ith row.

* A 2D Array is also referred as an array of arrays. An array which each element is another array.


## String :
* Srings are sequence of characters representing a piece of text. In programming langulage a string is represented as some characters enclosed by double quotes. "This is a string".
* A string is mainly declared using an array of characteres.
* Difference between a simple array of character and an array of character representing string is the end maker given at the and of the string. This is '\0' . NULL

#### 
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



