// Input a number and check is it Prime or Not.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter n : ";
    cin>> n;
    bool prime = true;

    for (int i = 2; i <= n - 1; i++) // Check  2 - (n-1)
    {
        if (n<2)
        {
            cout<< "You have to enter greater than 2." << endl;
            break;
        }   
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << n << " is a Prime Number!" << endl;
    }
    else
    {
        cout<< n << " is not a Prime Number!" << endl; 
    }

    return 0;
}