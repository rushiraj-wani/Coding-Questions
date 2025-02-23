#include<iostream>
using namespace std;

int main() {
    int T;
    cout << "Enter the value of T: ";
    cin >> T; // Read number of test cases

    while (T--) {
        long long N;
        cout << "Enter the value of N: ";
        cin >> N;

        long long arr[N];
        cout << "Enter the elements in array: ";
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        long long max_height = LLONG_MIN; // Use LLONG_MIN for long long range

        // Loop through all elements to find max
        for (int i = 0; i < N; i++) { 
            if (arr[i] > max_height) {
                max_height = arr[i];
            }
        }

        cout << max_height << endl; // Print max height for this test case
    }

    return 0;
}
