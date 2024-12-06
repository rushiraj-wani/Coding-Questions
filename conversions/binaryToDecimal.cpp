#include<iostream>
using namespace std;

int main(){
    int ans = 0; //decimal number
    int power = 1; //2^0
    int rem;
    long long binaryNum;
    cout << "Enter binaryNumber number ";
    cin >> binaryNum;


    while(binaryNum > 0){
        rem = binaryNum%10;
        ans += (rem * power);

        binaryNum /=10;
        power *=2;
    }
    cout << "Decimal Number is: " << ans << "\n";

    return 0;
}