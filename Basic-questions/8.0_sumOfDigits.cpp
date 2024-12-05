#include<iostream>
using namespace std;

int sumOfDigits(int num){
    
    while(num > 9){
        int digitSum = 0;
        while(num > 0){
            int lastDigit = num % 10;
            num /= 10;

            digitSum += lastDigit;
        }
        num = digitSum;
    }
    return num;
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Sum: " << sumOfDigits(n) << "\n";
    
    return 0;
}