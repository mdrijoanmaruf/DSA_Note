// Input n; convert binary to decimal ;

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int c;
    cout << "Binary : ";
    cin >> c;

    int decimal = 0;

    for (int i = 0; c!=0; i++)
    {
        decimal = decimal + (c%10 * pow(2,i));
        c/=10;
    }
    cout << "Decimal : " << decimal;
    return 0;

}