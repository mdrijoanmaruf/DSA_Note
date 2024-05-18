// Input n = row ; Result as like :
// Example : n = 4
//       1       
//     1 2 1     
//   1 2 3 2 1   
// 1 2 3 4 3 2 1 


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        // Print 1 - i
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }

        // Print i - 1
        for (int l = 0; l < i-1; l++)
        {
            cout << i - l - 1 << " ";
        }

        // Print l
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        cout << endl;
        
    }
    

    return 0;
}