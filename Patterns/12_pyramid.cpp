#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i; j++){
            cout << "  "; //inc 1 more space 
        }
        //Num-1
        for(int k=0; k<i+1; k++){
            cout << k+1 <<" "; //for this space.
        }
        //Num-2
        for(int k=i; k>0; k--){
            cout << k <<" "; //for this space.
        }
        cout <<"\n";
    }
    cout << "\n";
 
    return 0;
}