#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        char ch = 'A';
        for(char j=0; j<n; j++){
            cout << ch <<" ";
            ch +=1;
        }
        cout <<"\n";
    }
    cout << "\n";

    return 0;
}