/*
    Row with maximum ones (leetcode - 2643)
    Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

    In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

    Return an array containing the index of the row, and the number of ones in it.
*/

#include <iostream>
#include <vector>
using namespace std;   

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int row = 0, count = 0;

    for(int i=0; i<mat.size(); i++){
        int tempCount = 0;
        for(int j=0; j<mat[0].size(); j++){
            if(mat[i][j] == 1) tempCount++;
        }
        if(tempCount > count){
            row = i;
            count = tempCount;
        }
    }
    return {row, count};
}

int main(){
    vector<vector<int>> mat = {{0,0,0,1},{0,0,1,1},{0,1,1,1},{0,0,0,0}};
    vector<int> result = rowAndMaximumOnes(mat);

    cout << "Row: " << result[0] << " Ones: " << result[1] << "\n";

    return 0;
}