#include<iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter value of n: ";
    cin >> n;
    int sum = 0;

    int i=1;
    while(i<=n){
        sum+=i;
        if(i == 5){
            break;
        }
        i++;
    }
    cout << sum <<"\n";

    return 0;
}