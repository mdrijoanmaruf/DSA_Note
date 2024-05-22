// Write a fucntion to swap alternate an array :
// Example : 
// Array is : 1 2 3 4 5 6 7 
// Alternated Array : 2 1 4 3 6 5 7 

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

// Alternate Array Function :
void alternateArray(int arr[] , int size){
    for (int i = 0 , z = 0; i < size/2; i++)
    {
        
        swap(arr[z] , arr[z+1]);
        z += 2;
    }
    
}

int main()
{
    // Normal Array
    int arr[] = {1, 2, 3, 4, 5, 6 , 7};
    cout << "Array is : " ;
    int size = sizeof(arr)/sizeof(int);
    printArray(arr , size);

    // alternate the array :
    alternateArray(arr , size);
    cout << "Alternated Array : ";
    printArray(arr , size);
    return 0;
}