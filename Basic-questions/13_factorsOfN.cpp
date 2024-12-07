#include <iostream>
using namespace std;

void showFactors(int n) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n / 2; ++i) { 
        if (n % i == 0) {
            cout << i << ", ";
        }
    }
    cout << n << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        showFactors(num);
    }

    return 0;
}
