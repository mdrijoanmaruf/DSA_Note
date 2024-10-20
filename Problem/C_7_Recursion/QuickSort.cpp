#include <iostream>
using namespace std;

// Partation Function :
int partation(int *arr , int start , int end){
    int pivot = arr[start];     // Make the left 1st element as a pivot

    // Make a count less than pivot all element
    int count = 0;
    for(int i = start+1; i <= end; i++){    // (<=)--> end is last index and (i = s+1) --> we have to start count from the next element.
        if(arr[i] <= pivot){    // (<=) --> we have to count the same value as well
            count++;
        }
    }

    // Place the povit in the right position :
    int pivotIndex = start + count;
    swap(arr[pivotIndex] , arr[start]);

    // Not place all less then pivot value in the left part and others in right part
    int i = start;
    int j = end;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){  // if left element is already less than pivot
            i++;
        }
        while(arr[j] > pivot){  // if right element is already greater than pivot
            j--;
        }
        
        // if the element is not in the rigth postion
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }

}

// Quick Sort Function :
void quickSort(int* arr, int start , int end){
    // Base Case :
    if(start >= end){
        return ;
    }

    // Make Partition :
    int p = partation(arr , start , end);

    // Sort the left part :
    quickSort(arr , start , p-1);

    // Sort the right part :
    quickSort(arr , p+1 , end);
}

// Print Array :
void printArr(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]  << " ";
    }
    cout << endl;
}

int main() {
    int size = 10;
    int arr[size] = {2,7,11,4,21,78,4,8,33,87};
    
    // Befor :
    cout << "Before : ";
    printArr(arr , size);

    // Call quickSort function 
    quickSort(arr , 0 , size-1);

    // After :
    cout << "After : ";
    printArr(arr , size);

    return 0;
}