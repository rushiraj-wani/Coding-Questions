#include<iostream>
using namespace std;

int main(){
    int arr [5] = {3, 10, 28, -15, -150};
    int size = 5;
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        smallest = min(arr[i], smallest); 
    }
    cout << "Smallest number is: " << smallest << "\n";

    return 0;
}