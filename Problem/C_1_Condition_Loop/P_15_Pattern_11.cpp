// Input n = row; Result as like :
// Example : n = 4
//       * 
//     * * 
//   * * * 
// * * * * 

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter Row : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Printing space
        for (int j = 1; j <= n-i; j++)
        {
            cout << "  " ;
        }
        
        // Printing Stars
        for (int k = 1; k <= i; k++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
    
    return 0;
}