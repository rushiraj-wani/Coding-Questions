#include <iostream>
using namespace std;

bool isAdult(int age) {
    return age >= 18;
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (isAdult(age)) {
        cout << "You are an adult." << "\n";
    } else {
        cout << "You are not an adult." << "\n";
    }

    return 0;
}