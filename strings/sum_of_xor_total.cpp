//Input: nums = [5,1,6]
//Output: 28
//Explanation: The 8 subsets of [5,1,6] are:
//- The empty subset has an XOR total of 0.
//- [5] has an XOR total of 5.
//- [1] has an XOR total of 1.
//- [6] has an XOR total of 6.
//- [5,1] has an XOR total of 5 XOR 1 = 4.
//- [5,6] has an XOR total of 5 XOR 6 = 3.
//- [1,6] has an XOR total of 1 XOR 6 = 7.
//- [5,1,6] has an XOR total of 5 XOR 1 XOR 6 = 2.
//0 + 5 + 1 + 6 + 4 + 3 + 7 + 2 = 28


#include "iostream"
#include "vector"



int sum_of_xor_total(const std::vector<int>& nums) {
    int n = nums.size();
    int totalSum = 0;
    for (int i = 0; i < (1 << n); i++) {
        int subsetXor = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subsetXor ^= nums[j];
            }
        }
        totalSum += subsetXor;
    }
    return totalSum;
}

int main() {
    std::vector nums = {5, 1,6};
    int sum = sum_of_xor_total(nums);
    std::cout << sum;
}