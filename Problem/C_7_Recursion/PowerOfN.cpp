#include <iostream>
using namespace std;

int powerOf(int n , int power){

    // Bace Case :
    if(power == 0){
        return 1;
    }

    // Recursive relation :
    int ans = n * powerOf(n , power - 1);
    return ans;
}

int main() {
    int n , power;
    cin >> n >> power;

    int ans = powerOf(n , power);
    cout << n << " power " << power << " : " << ans << endl;
    return 0;
}