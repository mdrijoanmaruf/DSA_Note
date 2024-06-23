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
int arr = ['a' , 'e' , 'i' , 'o' , 'u'];    // char arry
string arr2 = "aeiou";  // will work as like arr
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



