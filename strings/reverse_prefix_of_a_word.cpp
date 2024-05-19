//Input: word = "abcdefd", ch = "d"
//Output: "dcbaefd"
//Explanation: The first occurrence of "d" is at index 3.
//Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".

#include "iostream"

std::string reverse_prefix_of_a_word(std::string word, char ch) {
    size_t position = word.find(ch);
    if (position != std::string::npos) {
        std::reverse(word.begin(), word.begin() + position + 1);
    }
    return word;
}

int main() {
    std::string data = reverse_prefix_of_a_word("abcdefd", 'd');
    std::cout << data;
}