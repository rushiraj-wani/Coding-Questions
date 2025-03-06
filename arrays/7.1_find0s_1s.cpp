#include<iostream>
#include <utility> // For std::pair
using namespace std;

/* 
    Normal int can't store 2 values so used pair<int, int>. so for this used std::pair which is in utility header file.
*/
pair<int, int> findOneZero(int arr[], int size){
    int countOne = 0;
    int countZero = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            countZero++;
        }
        if(arr[i] == 1){
            countOne++;
        }
    }
    return {countOne, countZero};
}

int main(){
    int arr[] = {1, 0, 1, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    pair<int, int> result = findOneZero(arr, size);
    cout << "Count of 1s: " << result.first << ", Count of 0s: " << result.second << endl;

    return 0;
}