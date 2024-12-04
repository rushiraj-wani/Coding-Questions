#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    char ch = 'A';

    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout << "  "; //inc 1 more space 
        }
        //Char
        for(int k=0; k<n-i; k++){
            cout << ch <<" "; //for this space.
        }
        cout <<"\n";
        ch +=1;
    }
    cout << "\n";
 
    return 0;
}