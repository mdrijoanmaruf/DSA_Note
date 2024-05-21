# Bitwise Operator
Perform operations on the bit level on the integers.
## Operators :
1. Bitwise AND (&)
2. Bitwise OR (|)
3. Bitwise XOR (^)
4. Bitwise NOT (~)
5. Left Shift (<<)
6. Right Shift (>>)

### 1. Bitwise AND(&) :
```cpp
int a = 5;  // Binary representation: 0101
int b = 3;  // Binary representation: 0011
int result = a & b;  // Binary result: 0001 (1 in decimal)
```
### 2. Bitwise OR(&) :
```cpp
int a = 5;  // Binary representation: 0101
int b = 3;  // Binary representation: 0011
int result = a | b;  // Binary result: 0111 (7 in decimal)
```

### 3. Bitwise XOR(^) :
```cpp
int a = 5;  // Binary representation: 0101
int b = 3;  // Binary representation: 0011
int result = a ^ b;  // Binary result: 0110 (6 in decimal)
```

### 4. Bitwise NOT(~) :
```cpp
int a = 5;  // Binary representation: 0101
int result = ~a;  // Binary result: 1010 (-6 in decimal due to two's complement representation)
```

### 5. Left Shift(<<) :
```c++
int a = 5;  // Binary representation: 0000 0101
int result = a << 1;  // Shifts all bits to the left by 1 position
// Binary result: 0000 1010 (10 in decimal)
```
* **Samall value :** Multiply with 2 per left shift.
* **Big value :** Will be negative number for big vlaue left shift.

**Note :** For -ve number it is compailer dependent.
**Note :** Each shifted value will be replaced with zero.

### 6. Right Shift(>>) :
```c++
int a = 5;  // Binary representation: 0000 0101
int result = a >> 1;  // Shifts all bits to the right by 1 position
// Binary result: 0000 0010 (2 in decimal)
```
* Devides with 2 per right shift
**Note :** Each shifted value will be replaced with zero.





