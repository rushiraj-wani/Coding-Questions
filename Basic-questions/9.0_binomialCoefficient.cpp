#include<iostream>
using namespace std;

// coefficient = n!/(r! * (n-r)!)

int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *=i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nMr = factorial(n-r);

    return fact_n / (fact_r * fact_nMr); 
}

int main(){
    int n, r;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;

    int ans = nCr(n,r);
    cout << "Ans: " << ans << "\n";

    return 0;
}