#include <iostream>
using namespace std;

bool linearSearch(int *arr , int size , int target){
    if(arr[0] == target){
        return true;
    }
    if(size == 0){
        return false;
    }

    linearSearch(arr + 1 , size - 1 , target);
}

int main() {
    int arr[5] = {2,3,5,9,4};
    int size = 5;

    if(linearSearch(arr , size , 9)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    return 0;
}