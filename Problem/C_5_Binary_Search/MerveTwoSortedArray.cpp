#include <iostream>
using namespace std;

// Merge 2 sorted array :
void mergeTwoSortedArray(int *mergeArr , int *arr1 , int *arr2 , int size1 , int size2){
    // Declear all array index start with 0
    int index1 = 0;
    int index2 = 0;
    int mergeArrayIndex = 0;

    // Merge 2 sorted array
    while(index1 < size1 && index2 < size2){
        if(arr1[index1] < arr2[index2]){
            mergeArr[mergeArrayIndex++] = arr1[index1++];
        }

        else{
            mergeArr[mergeArrayIndex++] = arr2[index2++];
        }
    }

    // If arr1 length greater than arr2
    while(index1 < size1){
        mergeArr[mergeArrayIndex++] = arr1[index1++];
    }

    // If arr2 length greater than arr1
    while(index2 < size2){
        mergeArr[mergeArrayIndex++] = arr2[index2++];
    }

}

// Print Array :
void printArray(int *arr , int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size1 = 10;
    int size2 = 15;
    int arr1[size1] = {1,3,5,6,8,9,14,56,244,999};
    int arr2[size2] = {3,4,21,45,67,89,99,890,908,999,1222, 1333,6567,8888,9090};

    int mergeArray[size1 + size2];

    // Print arr1 & arr2
    cout << "Array 1 : ";
    printArray(arr1 , size1);
    cout << "Array 2 : ";
    printArray(arr2 , size2);

    // Call Merge Function
    mergeTwoSortedArray(mergeArray , arr1 , arr2 , size1 , size2);

    // Now Print merge array :
    cout << "Merge Array : ";
    printArray(mergeArray , size1 + size2);
    return 0;
}