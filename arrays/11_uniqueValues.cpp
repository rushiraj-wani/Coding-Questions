/*
    Print all unique values in array.
*/

#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    cout << "Unique values in the array are: ";

    // outerloop -> Travel through each element of array.
    for (int i=0; i<size; i++) {
        bool isUnique = true;

        // innerloop -> compare current element with other all elements.
        for (int j=0; j<size; j++) {
            if (i!=j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        // If the element is unique, print it
        if (isUnique == true) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 34, 12, 56, 34, 56, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    printUniqueValues(arr, size);

    return 0;
}
