/*
    Missing Number (leetcode - 268)
    Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
    Input: nums = [3,0,1]
    Output: 2
*/

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int result = n;

    for(int i=0; i<n; i++){
        result ^= i ^ nums[i];
    }   
    return result;
}


int main(){
    vector<int> nums = {3,0,1};

    cout << "Missing Number: " << missingNumber(nums) << "\n";

    return 0;
}