#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter value of n: ";
    cin >> n;
    int oddSum = 0;

    int i = 1;
    while(i<=n){
        if(i%2 != 0){
            oddSum+=i;
        }
        i++;
    }
    cout << oddSum << "\n";

    return 0;
}