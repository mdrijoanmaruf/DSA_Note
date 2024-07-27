// Input n; Print Sum of nth number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i != n)
        {
            cout << i << " + ";
        }
        else{
            cout << i << " = ";
        }
        sum += i;
    }
    cout << sum;

    return 0;
}