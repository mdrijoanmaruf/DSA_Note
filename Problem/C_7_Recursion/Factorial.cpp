#include <iostream>
using namespace std;

int factorial(int n){
    // Base case :
    if(n == 0){
        return 1;
    }
    // Recursive relation :
    int ans = n * factorial(n - 1);
    return ans;
}

int main() {
    int n;
    cin >> n ;

    cout << n << " factorial is : " << factorial(n) << endl;
    return 0;
}