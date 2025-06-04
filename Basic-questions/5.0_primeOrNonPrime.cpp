#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    if(n < 2){
        cout << "Prime \n";
    }

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {  // Efficient check up to sqrt(n)
        if (n % i == 0) {
            isPrime = false;
            break; // No need to check further, it's non-prime
        }
    }

    if (isPrime) {
        cout << "Prime\n";
    } else {
        cout << "Non Prime\n";
    }

    return 0;
}