#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cout << "Enter value of n: ";
    cin >> N;
    
    int arr[N];
    
    // input array
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    
    for(int i=N-1; i>=0; i--){
        cout << arr[i];
    }
    cout << endl;
    
    return 0;
}