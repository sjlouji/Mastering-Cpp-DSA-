#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string firstPalindrome(std::vector<std::string>& words) {
        for (const std::string& word : words) {
            if (isPalindrome(word)) {
                return word;
            }
        }
        return "";
    }

private:
    bool isPalindrome(const std::string& word) {
        int left = 0;
        int right = word.size() - 1;

        while (left < right) {
            if (word[left] != word[right]) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> words = {"abc", "car", "ada", "racecar", "cool"};
    std::string result = sol.firstPalindrome(words);
    std::cout << "First palindromic string: " << result << std::endl;
    return 0;
}
