#include<iostream>
using namespace std;

void reversedArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        swap(arr[start], arr[end]); 
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    /* This works only with vector, or use this in main.
    for(auto nums : arr){
        cout << nums << " ";
    }
    */
    
    cout << endl;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    reversedArray(arr, n);

    cout << "Reversed Array: ";
    printArray(arr, n);


    return 0;
}