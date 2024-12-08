#include<iostream>
using namespace std;

int main(){
    int arr [5] = {3, 10, 28, -15, 50};
    int size = 5;
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }

        // smallest = min(arr[i], smallest); 
        //other way of writing this if....!
    }
    cout << "Smallest number is: " << smallest << "\n";

    return 0;
}