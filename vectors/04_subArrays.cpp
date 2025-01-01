#include<iostream>
#include<vector>
using namespace std;

void subArray(vector<int> vec, int n) {
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++) {
                cout<<vec[k]<<" ";
            }
            cout<<" ";
        }
        cout << "\n";
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int n = vec.size();
    subArray(vec, vec.size());


    return 0;
}