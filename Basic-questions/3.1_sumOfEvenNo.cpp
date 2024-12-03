#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter value of n: ";
    cin >> n;
    int evenSum = 0;

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            evenSum+=i;
        }
    }
    cout << evenSum << " \n";

    return 0;
}