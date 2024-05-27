//You are given an array nums of non-negative integers. nums is considered special if there exists a number x such that there are exactly x numbers in nums that are greater than or equal to x.
//
//Notice that x does not have to be an element in nums.
//
//Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.
//
//
//
//Example 1:
//
//Input: nums = [3,5]
//Output: 2
//Explanation: There are 2 values (3 and 5) that are greater than or equal to 2.
//Example 2:
//
//Input: nums = [0,0]
//Output: -1
//Explanation: No numbers fit the criteria for x.
//If x = 0, there should be 0 numbers >= x, but there are 2.
//If x = 1, there should be 1 number >= x, but there are 0.
//If x = 2, there should be 2 numbers >= x, but there are 0.
//x cannot be greater since there are only 2 numbers in nums.
//Example 3:
//
//Input: nums = [0,4,3,0,4]
//Output: 3
//Explanation: There are 3 values that are greater than or equal to 3.

#include <iostream>
#include <vector>

using namespace std;

int specialArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int n = nums.size();

    for (int x = 0; x <= n; ++x) {
        int count = 0;
        for (int num : nums) {
            if (num >= x) {
                count++;
            }
        }
        if (count == x) {
            return x;
        }
    }

    return -1;
}

int main() {
    vector<int> nums1 = {3, 5};
    cout << "Special value for Example 1: " << specialArray(nums1) << endl;

    vector<int> nums2 = {0, 0};
    cout << "Special value for Example 2: " << specialArray(nums2) << endl;

    vector<int> nums3 = {0, 4, 3, 0, 4};
    cout << "Special value for Example 3: " << specialArray(nums3) << endl;

    return 0;
}
