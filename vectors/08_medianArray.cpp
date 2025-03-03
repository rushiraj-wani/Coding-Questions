#include<iostream>
#include<vector>
using namespace std;    

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // Ensure nums1 is the smaller array
    if (nums1.size() > nums2.size()) 
        return findMedianSortedArrays(nums2, nums1);

    int m = nums1.size();
    int n = nums2.size();
    int left = 0, right = m;
    
    while (left <= right) {
        int partition1 = (left + right) / 2;
        int partition2 = (m + n + 1) / 2 - partition1;

        // Get left & right values for both partitions
        int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
        int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];

        int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
        int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];

        // If correct partition found
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if ((m + n) % 2 == 0) {
                return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
            } else {
                return max(maxLeft1, maxLeft2);
            }
        }
        else if (maxLeft1 > minRight2) {
            right = partition1 - 1;  // Move left
        }
        else {
            left = partition1 + 1;   // Move right
        }
    }

    return -1;  // This case should never occur
}

int main(){
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double median = findMedianSortedArrays(nums1, nums2); // Call function

    cout << "Median: " << median << endl;  // Print the result

    return 0;  // Proper return statement
}
