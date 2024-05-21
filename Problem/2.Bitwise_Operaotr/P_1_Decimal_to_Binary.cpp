// Input n; convert decimal to binary ;

#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cout << "Decimal : ";
    cin >> n;
    string b = "";

    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;
        n = n >> 1;
        i++;
        b.insert(0 ,to_string(bit));

    }
    
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '1')
        {
            b[i] = '0';
        }
        else{
            b[i] = '1';
        }
        
    }

    cout << b << endl;
    
    return 0;
}
