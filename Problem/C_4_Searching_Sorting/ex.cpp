#include <iostream>
using namespace std;

void coinChange(int ammount , int denominations[] , int size){
    int result[100];
    int totalCoins = 0;

    for(int i = 0; i < size ; i ++){
        while(ammount >= denominations[i]){
            ammount = ammount - denominations[i];
            result[totalCoins] = denominations[i];
            totalCoins++;
        }
    }

    // Output the result
    if(ammount == 0){
        cout << "The minimum number of coins is: " << totalCoins << endl;
        cout << "The coins are: ";
        for (int i = 0; i < totalCoins ; i ++){
            cout << result[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "It is not possible to make the change with the given denominations." << endl;
    }
}

int main(){
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int size = sizeof(denominations) / sizeof(denominations[0]);

    int ammount;
    cout << "Enter the amount of money: ";
    cin >> ammount;

    coinChange(ammount, denominations, size);
    
    return 0;
}