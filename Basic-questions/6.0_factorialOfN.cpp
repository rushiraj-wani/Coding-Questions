#include<iostream>
using namespace std;

int main(){
    cout << "Enter value of n: ";
    int n;
    cin >> n;
    int fact = 1; // 1, if 0 then 0*anything = 0. 

    for(int i = 1; i<= n; i++){
        fact = fact * i;
    }
    cout << "factorial: " << fact << endl;

    return 0;
}