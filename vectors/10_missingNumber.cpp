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

    // size of n;
    int n = nums.size();

    // sum of n natural numbers
    int total = n * (n + 1) / 2;

    // sum of all elements in the array
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    // missing number
    return total - sum;
}


int main(){
    vector<int> nums = {3,0,1};

    cout << "Missing Number: " << missingNumber(nums) << "\n";

    return 0;
}