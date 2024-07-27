// Print fibonacci series n times; Output as like :


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    int first = 0;
    int second = 1;
    int next;

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            cout << i << endl;
            continue;
        }
        
        next = first + second;
        cout << next << endl;
        first = second;
        second = next;
        
    }
    
    return 0;
}