#include <iostream>
using namespace std;

void reverseString(string &s , int i , int j){
    // Base Case :
    if(i > j){
        return ;
    }

    swap(s[i] , s[j]);
    i++; 
    j--;

    // Recursive Call :
    reverseString(s , i , j);
}

int main() {
    string s = "ABCDEFGH";

    cout << "Before : " << s << endl;
    reverseString(s , 0 , s.length()-1);
    cout << "After : " << s << endl;
    return 0;
}