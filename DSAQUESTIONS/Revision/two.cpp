#include <iostream>
using namespace std;

int main() {
    int decimal;
    long long binary = 0;
    int base = 1;

    cin >> decimal;   // example: 45

    while (decimal > 0) {
        int rem = decimal % 2;          // remainder (0 or 1)
        binary = binary + rem * base;   // build binary number
        base = base * 10;               // move to next place
        decimal = decimal / 2;          // reduce decimal
    }

    cout << binary;
    return 0;
}
