#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int hexToDec(const string& hex) {
    int decimal = 0;
    int base = 1;

    for (int i = hex.length() - 1; i >= 0; --i) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        }
        base *= 16;
    }

    return decimal;
}

int main() {
    string hex;
    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int decimal = hexToDec(hex);
    cout << "The decimal equivalent is: " << decimal << endl;

    return 0;
}