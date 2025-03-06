#include<iostream>
#include<limits.h>
#include <utility>
using namespace std;

pair<int, int> minMax(int arr[], int size){
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    for(int i=0; i<size; i++){
        minValue = min(minValue, arr[i]); 
        maxValue = max(maxValue, arr[i]);
    }
    return {minValue, maxValue};    
}

int main(){
    int arr[] = {3, 140, 28, -15, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    pair<int, int> result = minMax(arr, size);
    cout << "Min: " << result.first << ", Max: " << result.second << endl;


    return 0;
}