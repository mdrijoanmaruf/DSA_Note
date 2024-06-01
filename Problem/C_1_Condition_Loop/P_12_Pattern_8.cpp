// Input n = row ; Result as like :
// Example : n = 3
// A B C
// B C D 
// C D E

// Basic Way
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter row : ";
//     cin >> n;

//     char c1 = 'A';
//     char c2 = 'A';

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << c1 << " ";
//             c1++;
//         }
//         c2++;
//         c1 = c2;
//         cout << endl;
//     }
    
//     return 0;
// }

// Advance Way
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c = i + j - 1 + 'A' - 1;
            cout << c << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}

// Explanation :
// i + j - 1 -->    1 2 3
                //  2 3 4
                //  3 4 5
// Then we convert 1 into A by (i + j - 1 + 'A' - 1 )