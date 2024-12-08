#include<iostream>
using namespace std;

int main(){
    int arr [5] = {3, 140, 28, -15, 50};
    int size = 5;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        largest = max(arr[i], largest); 
    }
    cout << "Smallest number is: " << largest << "\n";

    return 0;
}