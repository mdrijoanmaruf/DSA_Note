// input n = row; Result as like :
// Example : n = 4
// *
// * *
// * * *
// * * * *

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Row Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)    // Loop for row
    {
        for (int j = 0; j < i; j++) // Loop for column
        {
            cout << "* " ;
        }
        cout << endl;
    }
    
    return 0;
} 