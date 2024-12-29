/*
    Swap the max & min value of an array.
*/

#include<iostream>
using namespace std;

void swapMinMax(int arr[], int size){
    int small = INT_MAX,  large = INT_MIN;
    int smallIndex = -1, largeIndex = -1;

    for (int i = 0; i < 5; i++) {
        if (arr[i] < small) {
            small = arr[i];
            smallIndex = i; 
        }
        if (arr[i] > large) {
            large = arr[i];
            largeIndex = i; 
        }
    }

    if (smallIndex != -1 && largeIndex != -1) {
        swap(arr[smallIndex], arr[largeIndex]);
    }

    cout << "Array after swapping max and min: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[5] = {1,2,4,5,3}; 
    int size = 5;
    
    swapMinMax(arr, size);

    return 0;
}