// Create a isPrime function. In the main function input n; and print 1 to n all prime number.

#include <iostream>
using namespace std;

// Check n is prime or not
bool isPrime(int n){
    bool check = true;
    if(n == 1 or n == 2){
        return true;
    }
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            check = false;
        }
    }
    return check;
}


int main() {
    int n;
    cout << "Enter n : " ;
    cin >> n;

    cout <<"Prime numbers in 1 to " << n << " :" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
        
    }
    


    return 0;
}