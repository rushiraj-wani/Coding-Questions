/*
    Print Intersection of two array.
*/

#include<iostream>
using namespace std;

void intersectionTwoArrays(int arr[], int brr[] ,int sizeArr, int sizeBrr) {
    for (int i=0; i<sizeArr; i++) {
        for (int j=0; j<sizeBrr; j++) {
            if (arr[i] == brr[j]) {
                cout << arr[i] << " ";
                break; // Prevent duplicates from arr
            }
        }
    }
    cout << endl;
}


int main(){
    int arr[] = {1,3,5,7,7,5};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    int brr[] = {2,4,5,7,7,3};
    int sizeBrr = sizeof(brr) / sizeof(brr[0]);

    intersectionTwoArrays(arr,brr, sizeArr, sizeBrr);

    return 0;
}