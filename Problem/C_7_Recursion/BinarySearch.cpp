#include <iostream>
using namespace std;

int binarySearch(int *arr , int key , int start , int end){
    // Not Found Case :
    if(start > end){
        return -1;
    }
    
    int mid = start + (end - start)/2;

    // Found Case :
    if(arr[mid] == key){
        return mid;
    }
    
    // Recursive Case :
    if(key < mid){
        binarySearch(arr , key , 0 , mid - 1);
    }

    if(key > mid){
        binarySearch(arr , key , mid+1 , end);
    }
}

int main() {
    int arr[10] = {1,3,6,7,9,12,55,66,78,90};
    int size= 10;
    int key = 9;

    int ans = binarySearch(arr , key , 0 , size-1);

    if(ans == -1){
        cout << "Not Found" << endl;
    }
    else{
        cout << key << " in " << ans << " index." << endl;
    }

    return 0;
}