#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter value of n: ";
    cin >> n;
    int evenSum = 0;

    int i=1;
    while(i<=n){
        if(i%2 == 0){
            evenSum+=i;
        }
        i++;
    }
    cout << evenSum << " \n";

    return 0;
}