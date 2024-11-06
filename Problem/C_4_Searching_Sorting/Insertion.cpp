#include<iostream>  // Input-output stream
using namespace std;  // Standard namespace

// Merge two sorted halves
void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Temp arrays for two halves
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values to first half
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    // Copy values to second half
    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge two halves into main array
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    } 
    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

// Merge sort function
void mergeSort(int *arr, int s, int e) {
    if(s >= e) return;  // Base case

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);       // Sort left part
    mergeSort(arr, mid + 1, e);   // Sort right part
    merge(arr, s, e);             // Merge sorted parts
}

int main() {
    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    mergeSort(arr, 0, n - 1);  // Sort array

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
