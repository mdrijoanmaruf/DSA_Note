// Input n = rwo; Output as like : Output as like :
// Example : n = 3
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter Row : ";
    cin >> row;

    int count = 1;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    
    return 0;
}