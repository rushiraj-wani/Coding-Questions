#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseVector(vector<int> &vec){
    // used reverse inbuilt function.
    reverse(vec.begin(), vec.end());

    // print the reversed vector
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout << endl;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    reverseVector(vec); 

    return 0;
}