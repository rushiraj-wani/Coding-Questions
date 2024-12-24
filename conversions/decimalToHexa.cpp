#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

string decimalToHexa(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    string hex = decimalToHexa(decimal);
    cout << "Hexadecimal: " << hex << endl;
    return 0;
}