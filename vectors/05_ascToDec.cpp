#include<iostream>
#include<vector>
using namespace std;

void ascToDec(vector<int>& vec){
    int left = 0, right = 0; // Initiate i and j with 0;

    while(right < vec.size()){
        if(vec[right] < 0){
            swap(vec[left], vec[right]);
                left++;
        }
        right++; // always increase
    }

    // print vector
    for(int num : vec){
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vec = {1,5,-45,6,-12,31,-231,123,78};

    ascToDec(vec);

    return 0;
}