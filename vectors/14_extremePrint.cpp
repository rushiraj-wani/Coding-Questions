#include<iostream>
#include<vector>
using namespace std;

void extremePrint(vector<int> &vec){
    int start=0;
    int end=vec.size()-1;

    while(true){
        if(start > end){
            break;
        }
        if(start == end){
            cout << vec[start] << " ";
        }
        else{
            cout << vec[start] << " ";
            cout << vec[end] << " ";
        }
        start++;
        end--;
    }
    cout << endl;
}

int main(){
    vector<int> vec = {1, 3, 5, 7, 11}; 
    extremePrint(vec);

    return 0;
}