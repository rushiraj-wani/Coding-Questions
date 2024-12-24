#include<iostream>
using namespace std;

int addSum(int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + i + 1;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int answer = addSum(n);
    cout << "Sum of n numbers is: " << answer << endl;

    return 0;
}