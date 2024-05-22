// Write a fucntion to reverse an array :

#include <iostream>
using namespace std;

// Print Array Function :
void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]  << " " ;
    }
    cout << endl;
}

// Reverse Array Function :
void reverseArray(int arr[] , int size){
    for (int i = 0; i < size/2; i++)
    {
        swap(arr[i] , arr[size - i - 1]);
    }
    
}

int main()
{
    // Normal Array
    int arr[] = {1, 2, 3, 4, 6 , 7};
    cout << "Array is : " ;
    int size = sizeof(arr)/sizeof(int);
    printArray(arr , size);

    // Reverse the array :
    reverseArray(arr , size);
    cout << "Reversed Array : ";
    printArray(arr , size);
    return 0;
}