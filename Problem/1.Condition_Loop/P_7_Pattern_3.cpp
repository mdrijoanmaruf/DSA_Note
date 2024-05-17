// Input n; Row = Column = n; Will be squre shape as like;
// Example : n = 4
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : " ;
    cin >> n;

    for (int i = 1; i <= n; i++)    // For Row
    {
        for (int j = n; j != 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}