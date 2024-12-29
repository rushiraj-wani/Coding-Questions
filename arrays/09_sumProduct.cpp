/* 
    Calculate sum and product of all numbers in array.
*/

#include<iostream>
using namespace std;

void sumProduct(int arr[], int size){
    int sum = 0;
    int product = 1;
    for(int i=0; i<size; i++){
        sum = sum+arr[i];
        product = product * arr[i];
    }
    cout << "Sum of array is : " << sum << "\n";
    cout << "Product of array is : " << product << "\n";
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = 5;

    sumProduct(arr, size);

    return 0;
}
