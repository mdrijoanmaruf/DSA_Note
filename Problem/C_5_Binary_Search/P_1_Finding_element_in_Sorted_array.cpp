// Find an element index in the sorted array :
#include <iostream>
using namespace std;


// Finding the key index in the sorted array
int findElementInSortedArray(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while (start <= end)
    {
        // Check the middle point is quals to key or not
        if (arr[mid] == key)
        {
            return mid;
        }
        
        // Check the key side
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // Check the key side
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 5, 8, 9, 12, 15};
    int size = sizeof(arr)/sizeof(arr[0]);

    int check = findElementInSortedArray(arr , size , 15);
    cout << check << endl;
    
    return 0;
}