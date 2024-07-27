#include <iostream>
using namespace std;

// Print Array 
void printArr(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Merge 
void merge(int *arr , int start , int end){
    int mid = (end + start)/2;

    // Devide the array in 2 part
    int len1 = mid - start + 1; // 1st part length
    int len2 = end - mid;       // 2nd part length

    // Create 2 new array for store 2 part
    int * firstArr = new int[len1];    // Create a dynamic array firstArr
    int * secondArr = new int[len2]; // Create a dynamic array secondArr

    // Copy 1st Part in the firstArr Dynamic Array 
    int mainArrayIndex = start;
    for(int i = 0; i < len1; i++){
        firstArr[i] = arr[mainArrayIndex++];
    }

    // Copy 2nd Part in the secondArr Dynamic Array 
    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        secondArr[i] = arr[mainArrayIndex++];
    }

    // Merge 2 sorted array 
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start; // Set all array index 0

    while(index1 < len1 && index2 < len2){
        if(firstArr[index1] < secondArr[index2]){
            arr[mainArrayIndex++] = firstArr[index1++];
        }
        else{
            arr[mainArrayIndex++] = secondArr[index2++];
        }
    }

    // If firstArr is greater than secondArr
    while(index1 < len1){
        arr[mainArrayIndex++] = firstArr[index1++];
    }

    // If secondArr is greater than firstArr
    while(index2 < len2){
        arr[mainArrayIndex++] = secondArr[index2++];
    }

    delete [] firstArr;
    delete [] secondArr;
}


// Merge Sort 
void mergeSort(int *arr , int start , int end){
    // Base Case :
    if(start >= end){
        return ;
    }

    int mid = (end + start)/2;

    // Sort the Left Part :
    mergeSort(arr , start , mid);

    // Sort Right part :
    mergeSort(arr , mid + 1, end);
    // Merge
    merge(arr , start , end); 
}



int main() {
    int arr[10] = {3,2,9,5,11,17,1,3,8,9};
    int size = 10;

    cout << "Befor : ";
    printArr(arr , size);

    // Function Call 
    mergeSort(arr , 0 , size-1);

    cout << "After : ";
    printArr(arr , size);
    return 0;
}