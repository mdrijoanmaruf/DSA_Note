#include <iostream>
using namespace std;

void bubbleSort(int *arr , int size){
    // Bace Case :
    if(size == 0 || size == 1){
        return ;
    }

    // Main case
    for(int i = 0; i < size; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    // Recursion call :
    bubbleSort(arr , size - 1);
}

void printArr(int *arr , int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {
    int arr[7] = {2,4,2,6,8,5,2};
    int size = 7;

    cout << "Before : " ;
    printArr(arr , size);

    bubbleSort(arr , size-1);

    cout << "After : ";
    printArr(arr , size);
    return 0;
}