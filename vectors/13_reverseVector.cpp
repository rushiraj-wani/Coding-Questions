#include<iostream>
#include<vector>
using namespace std;   

void reverseVector(vector<int> &vec){
    vector<int> temp;
    for(int i=vec.size()-1; i>=0; i--){
        temp.push_back(vec[i]);
        // dont do 
        // temp = vec[i];
        // as temp is a vector and vec[i] is an integer, so....
    }

    // print the reversed vector
    for(int i=0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    cout << endl;
}


int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    reverseVector(vec);


    return 0;
}