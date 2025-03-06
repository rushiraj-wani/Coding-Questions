#include<iostream>
#include <utility> // For std::pair
using namespace std;   

pair<int, int> findMinMax(int arr[], int size){
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }
    }
    return {min, max};
}

int main(){
    int arr[] = {3, 140, 28, -15, 50};
    int size = sizeof(arr) / sizeof(arr[0]);    

    pair<int, int> result = findMinMax(arr, size);
    cout << "Min: " << result.first << ", Max: " << result.second << endl;

    return 0;
}