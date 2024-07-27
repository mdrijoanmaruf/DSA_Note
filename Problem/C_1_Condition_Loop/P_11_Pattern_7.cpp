// Input n ; row = column ; Output as like :
// Example : n = 3
// A A A 
// B B B
// C C C

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n : ";
    cin >> n;

    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
    
    return 0;
}