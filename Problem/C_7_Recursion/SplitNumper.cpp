#include <iostream>
using namespace std;
void split(int n){
    if(n < 10 && n >= 0){
        cout << n << endl;
        return ;
    }
    split(n/10);
    cout << n % 10 << endl;
}

int main() {
    int n;
    cin >> n;

    split(n);
    return 0;
}