// Input n = row ; Result as like :
// Example : n = row = 4;
// A 
// B C 
// C D E 
// D E F G 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter row : ";
    cin >> n;

    char c ;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            c = i + j - 1 + 'A' - 1;
            cout << c << " " ;
            c++;
        }
        cout << endl;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << c << " " ;
    //         c++;
    //     }
    //     cout << endl;
    // }
    
    // This will output : 
    // A 
    // B C 
    // D E F
    // G H I J
    return 0;
}