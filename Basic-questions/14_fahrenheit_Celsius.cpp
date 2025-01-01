#include<iostream>
using namespace std;

int fahrenheitToCelsius(int f) {
   return (f - 32) * 5 / 9;
}

int main() {
    cout << "Enter the temperature in Fahrenheit: ";
    int f;
    cin >> f;

    cout << "Temperature in Celsius: " << fahrenheitToCelsius(f) << endl;
   
   return 0;
}