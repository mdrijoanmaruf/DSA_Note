#include <iostream>
using namespace std;

int arraySum(int *arr , int size){
    if(size == 1){
        return arr[0];
    }

    int ans = arr[0] + arraySum(arr + 1 , size - 1);
    return ans;
}

int main() {
    int arr[5] = {1,3,6,1,1};
    int size = 5;

    int ans = arraySum(arr , size);
    cout << "Sum of array : " << ans << endl;
    return 0;
}