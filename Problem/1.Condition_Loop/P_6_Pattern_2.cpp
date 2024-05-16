// Input row & column . And print as like :
// Example : row 4 , column 3
// 1 1 1
// 2 2 2
// 3 3 3
// 4 4 4

#include <iostream>
using namespace std;

int main() {
    int row , column;
    cout << "Enter Row & Column : ";
    cin>> row >> column;

    for (int i = 1; i <= row; i++)  // For every row 
    {
        for (int j = 1; j <= column; j++)   // Fow every column
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}