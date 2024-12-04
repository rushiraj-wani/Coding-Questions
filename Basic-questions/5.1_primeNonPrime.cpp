#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter value of n: ";
    cin >> n;
    bool isPrime = true;

    // 1 is not a prime number!
    if(n<2){
        cout << "Non-Prime\n";
        return 0;
    }
    else{
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){ //non-prime
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
            cout << "Prime\n";
        }
        else{
            cout << "Non-Prime\n";
        }
    }

    return 0;
}