#include<iostream>
using namespace std;

int celsiusToFahrenheit(int c) {
    return c * 9 / 5 + 32;
}

int main() {
    cout << "Enter the temperature in Celsius: ";
    int c;
    cin >> c;

    cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(c) << endl;
    
    return 0;
}