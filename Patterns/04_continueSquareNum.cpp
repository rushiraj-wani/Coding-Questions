#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int num = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << num <<" ";
            num++;
        }
        cout <<"\n";
    }
    cout << "\n";

    return 0;
}