//Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
//Output: true
//Explanation:
//word1 represents string "ab" + "c" -> "abc"
//word2 represents string "a" + "bc" -> "abc"
//The strings are the same, so return true.

#include "iostream"
#include <vector>

bool check_two_string_array_equality(std::vector<std::string>& word1, std::vector<std::string>& word2) {
    std::string str1, str2;
    for (int i = 0; i < word1.size(); i += 1) {
        str1 += word1[i];
    }
    for (int i = 0; i < word2.size(); i += 1) {
        str2 += word2[i];
    }
    return str1 == str2;
}

int main() {
    std::vector<std::string> word1;
    word1.emplace_back("ab");
    word1.emplace_back("c");
    std::vector<std::string> word2;
    word2.emplace_back("abc");
    bool equal = check_two_string_array_equality(word1, word2);
    std::cout << equal;
}