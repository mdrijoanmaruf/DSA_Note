#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x){
    int start = 0;
    int end = n - 1;

    while( start <= end ){
        int mid = (start + end) / 2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    int result = binarySearch(arr, n, x);
    cout << "Element is present at index " << result << endl;
    return 0;
}