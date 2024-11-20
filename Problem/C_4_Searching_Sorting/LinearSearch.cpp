#include <iostream>
using namespace std;

int linearSearch(int *arr , int n , int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 15;
    cout << "Element Found at index : " << linearSearch(arr, n, target) << endl;
    return 0;
}