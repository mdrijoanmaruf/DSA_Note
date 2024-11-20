#include <iostream>
using namespace std;

int partition(int *arr , int s , int e){
    int pivot = arr[s];
    int count = 0;

    // Count elements less than or equal to pivot
    for(int i = s + 1; i <= e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // Place pivot at its correct position
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // Partition elements around pivot
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;  // Return pivot's final position
}

void quickSort(int *arr , int s , int e){
    if(s < e){
        int p = partition(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}

int main() {
    int arr[10] = {4, 7, 3, 8, 5, 3, 64, 7, 4, 23};
    int s = 0, e = 9;
    quickSort(arr, s, e);
    // Print sorted array
    for (int i = 0; i <= e; i++) {  // Corrected loop to print all elements
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
