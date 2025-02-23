/*
    int arr[5]={10,20,30,40,50};
	int element = 60;
    therfore 60 is not present in array.
*/

#include<iostream>
using namespace std;

int main() {


    int N, X;
    cout << "Enter value of N and X: ";
    cin >> N >> X;
    
    int A[N];
    
    // input A
    cout << "Enter the elements in array: ";
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    bool found = false;  // Flag to check if X is present
    
    //check if X is present in A.
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            found = true;
            break;  // Stop searching once found
        }
    }
    
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}