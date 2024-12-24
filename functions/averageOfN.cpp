#include<iostream>
using namespace std;

float avg(int n){
    int sum = 0;
    float avg;

    for(int i=0; i<n; i++){
        sum = sum + i + 1;
    }

    avg = static_cast<float>(sum) / n; // static_cast<type> is a way of typecasting.
    return avg;
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    float answer = avg(n);
    cout << "Average of " << n << " is : " << answer << "\n";

    return 0;
}