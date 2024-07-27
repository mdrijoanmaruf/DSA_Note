#include <iostream>
using namespace std;

void selectionSort(int *arr , int i , int size){
    // Base Case :
    if(size == 0 || size == 1){
        return ;
    }

    int minIndex = i;
    for (int x = i++; x < size; x++)
    {
        if(arr[x] < minIndex){
            swap()
        }
    }
    
}

int main() {
    int arr[10] = {2,4,65,3,3,6,87,23,45,68};
    int size = 10;

    selectionSort(arr , size , )
    return 0;
}