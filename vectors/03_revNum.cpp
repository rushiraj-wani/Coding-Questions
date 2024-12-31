#include<iostream>
using namespace std;

// vectors are passby value (change in copy) but we want passby reference so use &variableName.

void reverseArray(vector<int> &vec, int size){
    int start = 0;
    int end = size-1;

    while (start <= end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8};
    int size = 8;

    reverseArray(vec, size);

    for(int ans: vec){
        cout << ans << ",";
    }
    cout << endl;
    
    return 0;
}