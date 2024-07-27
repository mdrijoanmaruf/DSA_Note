// Input n ; n = row = column; Print as like :
// Example : n = row = column = 3;
// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;

int main() {
    int n, row, column;
    cout << "Enter n :";
    cin >> n;
    row = column = n;
    int z = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << z << " ";
            z++;
        }
        cout << endl;
    }
    
    return 0;
}