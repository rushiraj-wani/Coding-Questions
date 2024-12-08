#include<iostream>
using namespace std;

int main() {
    int arr[5] = {-130, 10, 28, -15, 50};
    int size = 5;
    int smallest = INT_MAX;
    int index = -1; // Initialize with an invalid index

    // Find the smallest value and its index
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            index = i; // Update the index when a new smallest value is found
        }
    }

    cout << "Index of smallest number is: " << index << "\n";

    return 0;
}
