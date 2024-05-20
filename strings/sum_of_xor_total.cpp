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