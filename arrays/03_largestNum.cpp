#include<iostream>
using namespace std;

int main(){
    int arr [5] = {3, 10, 238, -15, 50};
    int size = 5;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Smallest number is: " << largest << "\n";

    return 0;
}