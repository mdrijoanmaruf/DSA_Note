// Find the minimum and maximum value in a int array ;

#include <iostream>
using namespace std;

// Find max int function
int maxInt(int arr[] , int size){
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return max;
}

// Find min int function
int minInt(int arr[] , int size){
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}


int main() {
    int number[] = {3, 5, 6, 8, 12, 89, 2, 0};
    int size = sizeof(number) / sizeof(int);

    int max = maxInt(number , size);
    int min = minInt(number , size);

    cout << "Max int : " << max << endl;
    cout << "Min int : " << min << endl;
    return 0;
}