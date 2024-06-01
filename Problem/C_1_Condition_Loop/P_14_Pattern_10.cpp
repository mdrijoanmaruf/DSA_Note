// Input n = row ; Output as like :
// Example : n = 4
// D 
// C D 
// B C D 
// A B C D

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter row : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char c = j + n - i + 'A' - 1;
            cout << c << " ";
            c++;
        }
        cout << endl;
        
    }
    
    return 0;
}