#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1;

    cin >> binary;   // example: 101101

    while (binary > 0) {
        int lastDigit = binary % 10;   // last binary digit (0 or 1)
        decimal = decimal + lastDigit * base;
        base = base * 2;               // next power of 2
        binary = binary / 10;           // remove last digit
    }

    cout << decimal;
    return 0;
}
