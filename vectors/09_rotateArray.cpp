/*
    Rotate Array (leetcode - 189)
    Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]
    Explanation:
    rotate 1 steps to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateArray(vector<int>& nums, int k) {
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp; // we wants output in nums; so, we are assigning temp to nums.
    return nums;
}

vector<int> rotateArrayWhileLoop(vector<int>& nums, int k){
    vector<int> temp(nums.size());
    int i = 0;
    while(i < nums.size()){
        temp[(i + k) % nums.size()] = nums[i];
        i++;
    }
    return temp;
}

// print function
void printVec(vector<int> vec){
    cout << "Rotated Array: ";
    for(int nums : vec){
        cout << nums << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,10};
    int k = 3;

    // For loop: 
    vector<int> rotated = rotateArray(vec, k);
    printVec(rotated);

    vec = {1,2,3,4,5,6,7,8,10};

    // while loop:
    vector<int> rotatedWhile = rotateArrayWhileLoop(vec, k);
    printVec(rotatedWhile);
    

    return 0;
}