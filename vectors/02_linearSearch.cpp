#include<iostream>
#include<vector> 
using namespace std;

int linearSearch(vector<int>vec, int size, int target){
    for(int i=0; i<size; i++){
        if(vec[i] == target){
            return i;
        }
    }

    return -1; // target not found.
}

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8};
    int size = 8;
    int target = 5;

    cout << linearSearch(vec, size, target)<< endl;

    return 0;
}