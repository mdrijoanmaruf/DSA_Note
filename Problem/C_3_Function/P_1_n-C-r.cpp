// Input n , r. and show nCr value using function.

#include <iostream>
using namespace std;
// Factorial Function
int factorial(int x){
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
    
}

// nCr Function
int nCr(int n , int r){
    return factorial(n)/(factorial(r) * factorial(n-r));
}

int main() {
    int n , c;
    cout << "Enter n , c : ";
    cin >> n >> c;

    int result = nCr(n, c);
    cout << "nCr = " << result;
    return 0;
}