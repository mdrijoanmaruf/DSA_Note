// Input n. And Print nth even number sum.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the n : ";
    cin>> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of 1st " << n << "th Even number : " << sum;
    return 0;
}