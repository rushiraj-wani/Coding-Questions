#include<iostream>
using namespace std;

int main(){
    int ans = 0;
    int power = 1;
    int rem, decNum;
    cout << "Enter decimal number ";
    cin >> decNum;
    
    while(decNum > 0){
        rem = decNum%2;
        decNum = decNum/2;

        ans += (rem*power);
        power *=10;
    }
    cout << "Binary Number is: " << ans << "\n";


    return 0;
}