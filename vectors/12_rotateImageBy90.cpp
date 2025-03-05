/*
    Rotate Image by 90 degree (leetcode - 48)

    You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

    You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/


#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    // Transpose
    for(int i=0; i<matrix.size(); i++) {
        for(int j=i; j<matrix.size(); j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse
    for(int i=0; i<matrix.size(); i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // print
    for (const auto& row : matrix) {  // ✅ Correct: `row` is a vector<int>
        for (int num : row) {        // ✅ `num` is an int inside the row
            cout << num << " ";
        }
        cout << endl;
    }
    
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    rotate(matrix);

    return 0;
}