#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter value of n: ";
    cin >> n;
    int oddSum = 0;

    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            oddSum+=i;
        }
    }
    cout << oddSum << "\n";

    return 0;
}