#include <iostream>
using namespace std;

int main() {
    int binary, octal = 0, base = 1;

    cin >> binary;   // example: 101101

    while (binary > 0) {
        int lastDigit = binary % 8;   // last binary digit (0 or 1)
        octal = octal + lastDigit * base;
        base = base * 2;               // next power of 2
        binary = binary / 8;           // remove last digit
    }

    cout << octal;
    return 0;
}
