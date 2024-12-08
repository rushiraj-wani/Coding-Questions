#include<iostream>
using namespace std;

int main() {
    int arr[5] = {-130, 10, 280, -15, 50};
    int size = 5;
    int largest = INT_MIN;
    int index = -1; // Initialize with an invalid index

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            index = i; // Update the index when a new smallest value is found
        }
    }

    cout << "Index of largest number is: " << index << "\n";

    return 0;
}
