#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;


    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //Num
        for(int k=0; k<n-i; k++){
            cout << i+1;
        }
        cout <<"\n";
    }
    cout << "\n";
 
    return 0;
}