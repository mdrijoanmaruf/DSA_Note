// Input a number of row , column. Print Row colum * in squre shapw as like :
// Example Row = column = 3;
// * * *
// * * *
// * * *
// * * *

#include <iostream>
using namespace std;

int main() {
    int row, column;

    cout << "Enter Row & Column : ";
    cin >> row >> column;

    for (int i = 0; i < row; i++)   // Loop For every Row
    {
        for (int i = 0; i < column; i++)    // Loop for every Column
        {
            cout<< "* " ;
        }
        cout << endl;
    }
    return 0;
}